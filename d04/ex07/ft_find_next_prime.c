/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 12:02:54 by jbrown            #+#    #+#             */
/*   Updated: 2017/08/12 12:16:55 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb);
int		ft_find_next_prime(int nb);

int		ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
	{
		nb++;
	}
	return (nb);
}

int		ft_is_prime(int nb)
{
	int i;

	if (nb == 2 || nb == 3 || nb == 2147483647)
		return (1);
	else if (nb % 2 == 0 || nb % 3 == 0 || nb < 2)
		return (0);
	else
	{
		i = 5;
		while (i * i <= nb)
		{
			if (nb % i == 0 || nb % (i + 2) == 0)
				return (0);
			i += 6;
		}
		return (1);
	}
}
