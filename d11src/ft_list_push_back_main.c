/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 10:39:48 by jbrown            #+#    #+#             */
/*   Updated: 2017/08/22 22:27:06 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "../d11/ex00/ft_create_elem.c"
#include "../d11/ft_list.h"
#include "../d11/ex01/ft_list_push_back.c"

int		main(void)
{
	t_list *new_list;
	
	new_list = ft_create_elem((int*)(42));
	ft_list_push_back(&new_list, (int*)(30));
	ft_list_push_back(&new_list, (int*)(30));
	ft_list_push_back(&new_list, (int*)(5));
	new_list = new_list->next;
	new_list = new_list->next;
	new_list = new_list->next;
	printf("%d\n", (int)new_list->data);
}
