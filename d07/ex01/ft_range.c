/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 22:28:18 by jbrown            #+#    #+#             */
/*   Updated: 2017/08/16 23:29:39 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max);

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
