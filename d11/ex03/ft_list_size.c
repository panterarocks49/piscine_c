/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 09:58:27 by jbrown            #+#    #+#             */
/*   Updated: 2017/08/23 02:31:20 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int c;

	c = 0;
	if (begin_list)
	{
		c = 1;
		while (begin_list->next)
		{
			begin_list = begin_list->next;
			c++;
		}
	}
	return (c);
}
