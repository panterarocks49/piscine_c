/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 15:19:03 by jbrown            #+#    #+#             */
/*   Updated: 2017/08/10 15:41:00 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ex02/ft_swap.c"
#include "ft_putchar.c"
#include "ft_putnbr.c"

int main(void)
{
	int a;
	int b;
	
	a = 1;
	b = 2;
	ft_swap(&a, &b);
	ft_putnbr(a);
	ft_putnbr(b);
	ft_putchar('\n');
}
