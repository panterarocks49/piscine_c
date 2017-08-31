/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 23:06:28 by jbrown            #+#    #+#             */
/*   Updated: 2017/08/11 23:17:21 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power);

int		ft_recursive_power(int nb, int power)
{
	if (power > 1)
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
	else if (power == 1)
		return (nb);
	else if (power == 0)
		return (1);
	else
		return (0);
}
