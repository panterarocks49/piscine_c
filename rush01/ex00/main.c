/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlacerda <mlacerda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 15:01:38 by mlacerda          #+#    #+#             */
/*   Updated: 2017/08/20 22:56:39 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sdk_header.h"

int		main(int argc, char **argv)
{
	char	**board;
	char	**solvedboard;
	int		combinations;

	combinations = 0;
	if (is_valid(argc, argv))
	{
		board = set_input(argv);
		if (is_valid_board(board))
			solve(board, 0, &combinations, &solvedboard);
		if (combinations == 1)
		{
			print_it(solvedboard);
			free(board);
			return (0);
		}
		free(board);
	}
	write(1, "Error\n", 6);
	return (1);
}
