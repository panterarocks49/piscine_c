/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 21:12:42 by jbrown            #+#    #+#             */
/*   Updated: 2017/08/17 17:56:58 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../d07/ex03/ft_concat_params.c"
#include "../d07/ex02/ft_ultimate_range.c"
//#include "../d06/ex00/ft_putchar.c"
#include <stdio.h>

int		main(int argc, char **argv)
{
	char *tab;

	//tab = ft_concat_params(argc, argv);
	ft_ultimate_range(&tab, 0, 10);
	printf("%d", *tab);
}
