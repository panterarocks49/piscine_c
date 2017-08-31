/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 08:01:08 by jbrown            #+#    #+#             */
/*   Updated: 2017/08/23 16:05:32 by jbrown           ###   ########.fr       */
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
