/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 13:57:23 by jbrown            #+#    #+#             */
/*   Updated: 2017/08/11 15:13:00 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb);

int		ft_iterative_factorial(int nb)
{
	int i;

	if (nb > 0 && nb < 13)
	{
		i = nb;
		nb = 1;
		while (i > 0)
		{
			nb = nb * i;
			i--;
		}
		return (nb);
	}
	if (nb == 0)
		return (1);
	return (0);
}
