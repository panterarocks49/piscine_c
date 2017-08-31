/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlacerda <mlacerda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 13:23:48 by jbrown            #+#    #+#             */
/*   Updated: 2017/08/20 23:13:29 by jelzinga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_row(char **board, char nbr, int row)
{
	int col;

	col = 0;
	while (col < 9)
	{
		if (nbr == board[row][col])
			return (0);
		col++;
	}
	return (1);
}

int		check_col(char **board, char nbr, int col)
{
	int row;

	row = 0;
	while (row < 9)
	{
		if (nbr == board[row][col])
			return (0);
		row++;
	}
	return (1);
}

int		check_unit(char **board, char nbr, int row, int col)
{
	int rowst;
	int colst;

	row = (row / 3) * 3;
	col = (col / 3) * 3;
	rowst = row;
	colst = col;
	while (row < rowst + 3)
	{
		while (col < colst + 3)
		{
			if (nbr == board[row][col])
				return (0);
			col++;
		}
		col -= 3;
		row++;
	}
	return (1);
}

int		is_valid_placement(char **board, char nbr, int row, int col)
{
	if (check_row(board, nbr, row)
			&& check_col(board, nbr, col)
			&& check_unit(board, nbr, row, col))
		return (1);
	return (0);
}
