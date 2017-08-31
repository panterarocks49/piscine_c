/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 08:20:50 by jbrown            #+#    #+#             */
/*   Updated: 2017/08/23 13:51:16 by jbrown           ###   ########.fr       */
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
