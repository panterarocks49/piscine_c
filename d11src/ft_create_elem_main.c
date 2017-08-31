/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 10:39:48 by jbrown            #+#    #+#             */
/*   Updated: 2017/08/23 23:13:38 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "../d11/ex00/ft_create_elem.c"
#include "../d11/ex00/ft_list.h"

int		main(void)
{
	int nVal;
	int *ptr;
	int a;

	nVal = 42;
	t_list *list = ft_create_elem(&nVal);
	ptr = list->data;
	printf("%d\n", *ptr);
}
