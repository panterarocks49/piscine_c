/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 22:46:42 by jbrown            #+#    #+#             */
/*   Updated: 2017/08/23 03:02:22 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "../d11/ex00/ft_create_elem.c"
#include "../d11/ex02/ft_list_push_front.c"
#include "../d11/ex06/ft_list_clear.c"

int		main(void)
{
	t_list *new_list;
	t_list *elem;
	int a;
	int *ptr;

	a = 42;
	new_list = ft_create_elem(&a);
	ft_list_push_front(&new_list, (int*)(123));
	ft_list_push_front(&new_list, (int*)(642));
	ft_list_push_front(&new_list, (int*)(42));
	elem = new_list->next;
	ft_list_clear(&new_list);
	ptr = elem->data;
	printf("%d\n", *ptr);
}
