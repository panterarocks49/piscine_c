/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_opp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 19:05:19 by jbrown            #+#    #+#             */
/*   Updated: 2017/08/22 08:38:20 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

void	ft_div(int a, int b)
{
	if (b != 0)
		ft_putnbr(a / b);
	else
		ft_putstr("Stop : division by zero");
}

void	ft_add(int a, int b)
{
	ft_putnbr(a + b);
}

void	ft_sub(int a, int b)
{
	ft_putnbr(a - b);
}

void	ft_mul(int a, int b)
{
	ft_putnbr(a * b);
}

void	ft_mod(int a, int b)
{
	if (b != 0)
		ft_putnbr(a % b);
	else
		ft_putstr("Stop : modulo by zero");
}
