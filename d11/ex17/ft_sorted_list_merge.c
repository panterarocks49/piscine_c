/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_merge.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 09:16:35 by jbrown            #+#    #+#             */
/*   Updated: 2017/08/23 13:55:16 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list *list1;

	list1 = *begin_list1;
	if (list1)
	{
		while (list1->next)
			list1 = list1->next;
		list1->next = begin_list2;
	}
	else
		*begin_list1 = begin_list2;
}

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

void	ft_sorted_list_merge(t_list **begin_list1
		, t_list *begin_list2, int (*cmp)())
{
	ft_list_merge(begin_list1, begin_list2);
	ft_list_sort(begin_list1, cmp);
}
