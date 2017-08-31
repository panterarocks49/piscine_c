/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 22:46:42 by jbrown            #+#    #+#             */
/*   Updated: 2017/08/23 14:58:40 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "../d11/ex00/ft_create_elem.c"
#include "../d11/ex02/ft_list_push_front.c"
#include "../d11/ex08/ft_list_reverse.c"

void ft_list_print(t_list *list)
{
    while (list)
    {
        printf("%s\n", list->data);
        list = list->next;
    }
}

int		main(void)
{
	t_list *new_list;

	//new_list = NULL;
	new_list = ft_create_elem("asdf");
	ft_list_push_front(&new_list, "a");
	ft_list_push_front(&new_list, "c");
	//ft_list_push_front(&new_list, "g");

	ft_list_print(new_list);
	ft_list_reverse(&new_list);
	ft_list_print(new_list);
}
