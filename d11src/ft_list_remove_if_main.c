/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 22:46:42 by jbrown            #+#    #+#             */
/*   Updated: 2017/08/23 07:01:12 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "../d11/ex00/ft_create_elem.c"
#include "../d11/ex02/ft_list_push_front.c"
#include "../d11/ex12/ft_list_remove_if.c"

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 != *s2)
		return (*s1 - *s2);
	else
		return (0);
}

void ft_print_data(void *ptr)
{
	printf("%s\n", ptr);
}

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
	t_list *elem;

	new_list = ft_create_elem("a");
	ft_list_push_front(&new_list, "r");
	ft_list_push_front(&new_list, "a");
	ft_list_push_front(&new_list, "c");
	//ft_list_print(new_list);
	ft_list_remove_if(&new_list, "a", &ft_strcmp);
	ft_list_print(new_list);
}
