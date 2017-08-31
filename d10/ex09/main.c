/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 15:48:10 by jbrown            #+#    #+#             */
/*   Updated: 2017/08/22 09:07:13 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/do_op.h"
#include "includes/ft_opp.h"

void	ft_usage(int a, int b)
{
	a = 0;
	b = 6;
	ft_putstr("error : only [ ");
	while (a < b)
	{
		if (ft_strcmp(g_opptab[a].opp, ""))
		{
			ft_putstr(g_opptab[a].opp);
			ft_putchar(' ');
		}
		a++;
	}
	ft_putstr("] are accepted.\n");
}

int		main(int argc, char **argv)
{
	int		nb1;
	int		nb2;
	int		c;

	if (argc != 4)
		return (0);
	nb1 = ft_atoi(argv[1]);
	nb2 = ft_atoi(argv[3]);
	c = 0;
	while (c < 6)
	{
		if (!ft_strcmp(g_opptab[c].opp, argv[2]))
		{
			g_opptab[c].funct(nb1, nb2);
			ft_putchar('\n');
			return (0);
		}
		c++;
	}
	ft_usage(nb1, nb2);
	return (0);
}
