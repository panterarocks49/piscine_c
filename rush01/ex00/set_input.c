/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_input.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlacerda <mlacerda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 12:32:36 by mlacerda          #+#    #+#             */
/*   Updated: 2017/08/20 23:10:43 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sdk_header.h"

char	**set_input(char **argv)
{
	int		line;
	int		col;
	char	**board;

	line = 1;
	col = 0;
	board = malloc(9 * sizeof(char*));
	while (line < 10)
	{
		board[line - 1] = malloc(9 * sizeof(char));
		while (col < 9)
		{
			if (argv[line][col] == '.')
				board[line - 1][col] = '.';
			else
				board[line - 1][col] = argv[line][col];
			col++;
		}
		col = 0;
		line++;
	}
	return (board);
}

char	**boardcpy(char **argv)
{
	int		line;
	int		col;
	char	**board;

	line = 0;
	col = 0;
	board = malloc(9 * sizeof(char*));
	while (line < 9)
	{
		board[line] = malloc(9 * sizeof(char));
		while (col < 9)
		{
			board[line][col] = argv[line][col];
			col++;
		}
		col = 0;
		line++;
	}
	return (board);
}

int		is_valid(int argc, char **argv)
{
	int line;
	int col;

	line = 1;
	col = 0;
	if (argc != 10)
		return (0);
	while (line < argc)
	{
		while (argv[line][col] != '\0')
		{
			if (!((argv[line][col] <= '9' && argv[line][col] >= '1') ||
			argv[line][col] == '.'))
				return (0);
			col++;
		}
		if (col != 9)
			return (0);
		col = 0;
		line++;
	}
	return (1);
}

void	print_it(char **board)
{
	int		line;
	int		col;

	line = 0;
	col = 0;
	while (line < 9)
	{
		while (col < 9)
		{
			write(1, &board[line][col], 1);
			if (col != 8)
				write(1, " ", 1);
			else
				write(1, "\n", 1);
			col++;
		}
		line++;
		col = 0;
	}
}

int		is_valid_board(char **board)
{
	int		row;
	int		col;
	char	tmp;

	row = 0;
	col = 0;
	while (row < 9)
	{
		while (col < 9)
		{
			if (board[row][col] != '.')
			{
				tmp = board[row][col];
				board[row][col] = '.';
				if (!is_valid_placement(board, tmp, row, col))
					return (0);
				board[row][col] = tmp;
			}
			col++;
		}
		col = 0;
		row++;
	}
	return (1);
}
