/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 22:46:42 by jbrown            #+#    #+#             */
/*   Updated: 2017/08/23 16:05:25 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "../d11/ex00/ft_create_elem.c"
#include "../d11/ex02/ft_list_push_front.c"
#include "../d11/ex13/ft_list_merge.c"

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
	t_list *list1;
	t_list *list2;

	list1 = NULL;
	//list1 = ft_create_elem("a");
	//ft_list_push_front(&list1, "b");
	//ft_list_push_front(&list1, "c");
	//ft_list_push_front(&list1, "d");

	list2 = NULL;
	//list2 = ft_create_elem("e");
	//ft_list_push_front(&list2, "f");
	//ft_list_push_front(&list2, "g");
	//ft_list_push_front(&list2, "h");

	//ft_list_print(new_list);
	ft_list_merge(&list1, list2);
	ft_list_print(list1);
}
