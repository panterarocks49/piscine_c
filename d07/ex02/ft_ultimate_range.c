/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 01:28:47 by jbrown            #+#    #+#             */
/*   Updated: 2017/08/17 19:24:52 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max);
int		ft_ultimate_range(int **range, int min, int max);

int		*ft_range(int min, int max)
{
	int *range;
	int *ptr;

	if (min >= max)
		return (int *)(0);
	range = (int *)malloc(sizeof(int) * (max - min));
	ptr = range;
	while (min < max)
		*range++ = min++;
	return (ptr);
}

int		ft_ultimate_range(int **range, int min, int max)
{
	*range = ft_range(min, max);
	if ((max - min) > 0)
		return (max - min);
	return (0);
}
