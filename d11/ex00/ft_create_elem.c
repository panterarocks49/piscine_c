/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 09:19:48 by jbrown            #+#    #+#             */
/*   Updated: 2017/08/23 02:30:25 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_create_elem(void *data)
{
	t_list *new_list;

	new_list = malloc(sizeof(t_list));
	if (new_list)
	{
		new_list->data = data;
		new_list->next = NULL;
	}
	return (new_list);
}
