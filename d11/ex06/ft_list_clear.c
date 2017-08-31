/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 23:12:53 by jbrown            #+#    #+#             */
/*   Updated: 2017/08/23 14:03:38 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list **begin_list)
{
	t_list *node;
	t_list *del_elem;

	node = *begin_list;
	while (node)
	{
		del_elem = node;
		node = node->next;
		free(del_elem);
	}
	*begin_list = NULL;
}
