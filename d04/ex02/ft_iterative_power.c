/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 22:47:32 by jbrown            #+#    #+#             */
/*   Updated: 2017/08/11 23:03:58 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power);

int		ft_iterative_power(int nb, int power)
{
	int x;

	if (power > 1)
	{
		x = nb;
		while (power > 1)
		{
			nb = nb * x;
			power--;
		}
		return (nb);
	}
	else if (power == 1)
		return (nb);
	else if (power == 0)
		return (1);
	else
		return (0);
}
