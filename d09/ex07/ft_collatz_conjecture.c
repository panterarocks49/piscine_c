/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/18 08:25:42 by jbrown            #+#    #+#             */
/*   Updated: 2017/08/18 13:49:11 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	if (base == 1)
		return (0);
	else if (base % 2 == 0)
		ft_collatz_conjecture(base / 2);
	else
		ft_collatz_conjecture((base * 3) + 1);
}
