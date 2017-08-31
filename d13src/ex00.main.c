/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/24 23:22:48 by jbrown            #+#    #+#             */
/*   Updated: 2017/08/25 10:45:43 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../d13/ex00/btree_create_node.c"

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
