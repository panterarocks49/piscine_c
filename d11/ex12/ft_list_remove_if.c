/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 04:25:10 by jbrown            #+#    #+#             */
/*   Updated: 2017/08/23 14:00:38 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *prev_elem;
	t_list *cur_elem;
	t_list *free_elem;

	cur_elem = *begin_list;
	prev_elem = NULL;
	while (cur_elem)
	{
		if (!(*cmp)(cur_elem->data, data_ref))
		{
			if (cur_elem == *begin_list)
				*begin_list = cur_elem->next;
			else
				prev_elem->next = cur_elem->next;
			free_elem = cur_elem;
			cur_elem = cur_elem->next;
			free(free_elem);
		}
		else
		{
			prev_elem = cur_elem;
			cur_elem = cur_elem->next;
		}
	}
}
