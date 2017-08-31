/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/24 23:22:48 by jbrown            #+#    #+#             */
/*   Updated: 2017/08/25 13:52:19 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "../d13/ex00/btree_create_node.c"
#include "../d13/ex05/btree_search_item.c"
#include "../d13/ex04/btree_insert_data.c"

int		ft_strcmp(void *str1, void *str2)
{
	int		i;
	char 	*s1 = str1;
	char 	*s2 = str2;
	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int		main(void)
{
	t_btree *node1;
	t_btree *root;
	void	*ptr;

	node1 = btree_create_node("42");
	btree_insert_data(&node1, "38", &ft_strcmp);
	btree_insert_data(&node1, "24", &ft_strcmp);
	btree_insert_data(&node1, "10", &ft_strcmp);
	btree_insert_data(&node1, "5", &ft_strcmp);
	btree_insert_data(&node1, "200", &ft_strcmp);
	btree_insert_data(&node1, "35", &ft_strcmp);
	ptr = btree_search_item(node1, "25", &ft_strcmp);
	printf("%s\n", ptr);
}
