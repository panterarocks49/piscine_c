/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sdk_header.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlacerda <mlacerda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 14:34:43 by mlacerda          #+#    #+#             */
/*   Updated: 2017/08/20 22:32:38 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SDK_HEADER_H
# define SDK_HEADER_H

# include <unistd.h>
# include <stdlib.h>

char	**set_input(char **argv);
char	**boardcpy(char **argv);
void	print_it(char **board);
int		is_valid(int argc, char **argv);
int		is_valid_placement(char **board, char nbr, int row, int col);
int		solve(char **board, int position, int *combos, char ***solvedboard);
int		is_valid_board(char **board);

#endif
