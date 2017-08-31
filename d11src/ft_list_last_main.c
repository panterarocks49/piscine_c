/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 10:39:48 by jbrown            #+#    #+#             */
/*   Updated: 2017/08/22 22:38:07 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "../d11/ex00/ft_create_elem.c"
#include "../d11/ex02/ft_list_push_front.c"
#include "../d11/ex04/ft_list_last.c"

int		main(void)
{
	t_list *new_list;
	t_list *last;
	
	new_list = ft_create_elem((int*)(4242));
	ft_list_push_front(&new_list, (int*)(30));
	ft_list_push_front(&new_list, (int*)(30));
	ft_list_push_front(&new_list, (int*)(5));
	last = ft_list_last(new_list);
	printf("%d\n", (int)(last->data));
}
