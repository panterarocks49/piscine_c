/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/18 16:02:45 by jbrown            #+#    #+#             */
/*   Updated: 2017/08/18 16:05:01 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_max(int *tab, int length)
{
	int i;
	int bigint;

	bigint = tab[0];
	i = 0;
	while (i < length)
	{
		if (tab[i] > bigint)
			bigint = tab[i];
		i++;
	}
	return (bigint);
}