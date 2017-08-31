/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/24 23:22:48 by jbrown            #+#    #+#             */
/*   Updated: 2017/08/25 00:55:08 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../d13/ex01/btree_apply_prefix.c"

int		main(void)
{
	t_btree *node1;
	int		*ptr;
	int		a;

	a = 42;
	node1 = btree_create_node(&a);
	ptr = node1->item;
	printf("%d\n", *ptr);
}
