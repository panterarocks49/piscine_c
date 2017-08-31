/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 08:56:14 by jbrown            #+#    #+#             */
/*   Updated: 2017/08/11 12:00:03 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size);

void	ft_sort_integer_table(int *tab, int size)
{
	int tmp;
	int i;
	int place;

	i = 0;
	while (i < size - 1)
	{
		place = i + 1;
		while (place > 0 && tab[place] < tab[place - 1])
		{
			tmp = tab[place];
			tab[place] = tab[place - 1];
			tab[place - 1] = tmp;
			place--;
		}
		i++;
	}
}
