/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlacerda <mlacerda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 14:04:10 by jbrown            #+#    #+#             */
/*   Updated: 2017/08/20 23:06:19 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sdk_header.h"

int		is_solved(char **board, int position, int *combos, char ***solvedboard)
{
	if (position == 81)
	{
		*combos += 1;
		if (*combos == 1)
			*solvedboard = boardcpy(board);
		return (1);
	}
	return (0);
}

int		solve(char **board, int position, int *combos, char ***solvedboard)
{
	int		row;
	int		col;
	char	nbr;

	row = position / 9;
	col = position % 9;
	nbr = '0';
	if (is_solved(board, position, combos, solvedboard))
		return (1);
	if (board[row][col] != '.')
		return (solve(board, position + 1, combos, solvedboard));
	while (++nbr <= '9')
	{
		if (is_valid_placement(board, nbr, row, col))
		{
			board[row][col] = nbr;
			if (solve(board, position + 1, combos, solvedboard) && *combos > 1)
				return (1);
		}
	}
	board[row][col] = '.';
	return (0);
}
