/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 09:01:18 by jbrown            #+#    #+#             */
/*   Updated: 2017/08/23 15:57:58 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*cur_elem;
	t_list	*prev_elem;
	void	*tmp;

	cur_elem = *begin_list;
	if (cur_elem)
	{
		while (cur_elem->next)
		{
			prev_elem = cur_elem;
			cur_elem = cur_elem->next;
			if ((*cmp)(prev_elem->data, cur_elem->data) > 0)
			{
				tmp = cur_elem->data;
				cur_elem->data = prev_elem->data;
				prev_elem->data = tmp;
				cur_elem = *begin_list;
			}
		}
	}
}

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *this_elem;

	this_elem = *begin_list;
	if (this_elem)
	{
		while (this_elem->next)
			this_elem = this_elem->next;
		this_elem->next = ft_create_elem(data);
	}
	else
		*begin_list = ft_create_elem(data);
}

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	ft_list_push_back(begin_list, data);
	ft_list_sort(begin_list, cmp);
}
