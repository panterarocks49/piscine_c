/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 15:48:10 by jbrown            #+#    #+#             */
/*   Updated: 2017/08/22 22:40:58 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

void	check_zero(int nb1, int nb2, char op)
{
	if (op == '/')
	{
		if (nb2 != 0)
			ft_putnbr(nb1 / nb2);
		else
			ft_putstr("Stop : division by zero");
	}
	else if (op == '%')
	{
		if (nb2 != 0)
			ft_putnbr(nb1 % nb2);
		else
			ft_putstr("Stop : modulo by zero");
	}
}

int		main(int argc, char **argv)
{
	int nb1;
	int nb2;

	if (argc == 4 && !argv[2][1])
	{
		nb1 = ft_atoi(argv[1]);
		nb2 = ft_atoi(argv[3]);
		if (argv[2][0] == '+')
			ft_putnbr(nb1 + nb2);
		else if (argv[2][0] == '-')
			ft_putnbr(nb1 - nb2);
		else if (argv[2][0] == '*')
			ft_putnbr(nb1 * nb2);
		else if (argv[2][0] == '/' || argv[2][0] == '%')
			check_zero(nb1, nb2, argv[2][0]);
		else
			ft_putchar('0');
	}
	else if (argc == 4 && argv[2][1])
		ft_putnbr(0);
	else
		return (0);
	ft_putchar('\n');
	return (0);
}
