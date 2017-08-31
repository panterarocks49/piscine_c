/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 10:05:42 by jbrown            #+#    #+#             */
/*   Updated: 2017/08/23 16:13:57 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*list;
	t_list	*tmp;
	int		c;

	c = 2;
	if (av[1] == 0)
		return (0);
	list = ft_create_elem(av[1]);
	list->next = 0;
	while (c < ac)
	{
		tmp = list;
		list = ft_create_elem(av[c]);
		list->next = tmp;
		c++;
	}
	return (list);
}
