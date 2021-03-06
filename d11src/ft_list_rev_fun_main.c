/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 22:46:42 by jbrown            #+#    #+#             */
/*   Updated: 2017/08/23 14:51:41 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "../d11/ex00/ft_create_elem.c"
#include "../d11/ex02/ft_list_push_front.c"
#include "../d11/ex15/ft_list_reverse_fun.c"

void ft_list_print(t_list *list)
{
    while (list)
    {
        printf("%s\n", list->data);
        list = list->next;
    }
	printf("\n");
}

int		main(void)
{
	t_list *new_list;

	new_list = ft_create_elem("vbnm");
	ft_list_push_front(&new_list, "hjkl");
	ft_list_push_front(&new_list, "uiop");
	ft_list_push_front(&new_list, "asdf");
	ft_list_push_front(&new_list, "qwer");
	ft_list_push_front(&new_list, "doop");


	ft_list_print(new_list);
	ft_list_reverse_fun(new_list);
	ft_list_print(new_list);
}
