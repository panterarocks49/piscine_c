/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 03:19:08 by jbrown            #+#    #+#             */
/*   Updated: 2017/08/23 14:58:42 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
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

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int c;

	c = 0;
	while (c < nbr && begin_list)
	{
		begin_list = begin_list->next;
		c++;
	}
	return (begin_list);
}

void	ft_list_reverse(t_list **begin_list)
{
	int		len;
	int		i;
	void	*tmp;

	len = ft_list_size(*begin_list);
	i = -1;
	while (++i < len--)
	{
		tmp = ft_list_at(*begin_list, i)->data;
		ft_list_at(*begin_list, i)->data = ft_list_at(*begin_list, len)->data;
		ft_list_at(*begin_list, len)->data = tmp;
	}
}
