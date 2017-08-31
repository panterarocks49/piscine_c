/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 09:28:03 by jbrown            #+#    #+#             */
/*   Updated: 2017/08/23 02:30:12 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

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
