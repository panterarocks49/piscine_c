/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 10:39:48 by jbrown            #+#    #+#             */
/*   Updated: 2017/08/22 22:34:54 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "../d11/ex00/ft_create_elem.c"
#include "../d11/ex02/ft_list_push_front.c"
#include "../d11/ex03/ft_list_size.c"

int		main(void)
{
	t_list *new_list;
	
	new_list = ft_create_elem((int*)(42));
	ft_list_push_front(&new_list, (int*)(30));
	ft_list_push_front(&new_list, (int*)(30));
	ft_list_push_front(&new_list, (int*)(5));
	int size = ft_list_size(new_list);
	printf("%d\n", size);
}
