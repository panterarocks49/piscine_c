/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_active_bits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/18 16:31:34 by jbrown            #+#    #+#             */
/*   Updated: 2017/08/18 16:31:36 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_active_bits(int value)
{
	unsigned int	count;
	unsigned int	n;

	n = (unsigned int)value;
	count = 0;
	while (n)
	{
		count += n & 1;
		n >>= 1;
	}
	return (count);
}

int				main(void)
{
	printf("%d\n", ft_active_bits(-21474836));
}
