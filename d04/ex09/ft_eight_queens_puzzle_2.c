/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle_2.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 19:36:04 by jbrown            #+#    #+#             */
/*   Updated: 2017/08/12 22:06:34 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_eight_queens_puzzle_2(void);
int		is_safe(char board[8][8], int row, int col);
int		place_queens(char board[8][8], int col, int *combos);
void	print_solution(char board[8][8]);
int		ft_putchar(char c);

void	ft_eight_queens_puzzle_2(void)
{
	int		combinations;
	char	board[8][8];
	int		i;
	int		j;
	int		col;

	combinations = 0;
	i = 0;
	j = 0;
	col = 0;
	while (i < 8)
	{
		while (j < 8)
		{
			board[i][j] = '-';
			j++;
		}
		j = 0;
		i++;
	}
	place_queens(board, col, &combinations);
}

int		is_safe(char board[8][8], int row, int col)
{
	int i;
	int j;

	i = row + 1;
	j = col + 1;
	while (--i >= 0 && --j >= 0)
		if (board[i][j] == 'X')
			return (0);
	i = row - 1;
	j = col + 1;
	while (++i <= 8 && --j >= 0)
		if (board[i][j] == 'X')
			return (0);
	j = -1;
	while (++j < col)
		if (board[row][j] == 'X')
			return (0);
	return (1);
}

int		place_queens(char board[8][8], int col, int *combos)
{
	int row;

	row = 0;
	if (col == 8)
	{
		print_solution(board);
		*combos = *combos + 1;
		return (1);
	}
	while (row < 8)
	{
		if (is_safe(board, row, col) == 1)
		{
			board[row][col] = 'X';
			place_queens(board, col + 1, combos);
			board[row][col] = '-';
		}
		row++;
	}
	return (0);
}

void	print_solution(char board[8][8])
{
	int i;
	int j;

	i = 8;
	j = 8;
	while (--i >= 0)
	{
		while (--j >= 0)
		{
			if (board[i][j] == 'X')
			{
				ft_putchar(j + 1 + '0');
			}
		}
		j = 8;
	}
	ft_putchar('\n');
}
