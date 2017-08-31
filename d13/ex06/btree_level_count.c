/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/25 03:07:16 by jbrown            #+#    #+#             */
/*   Updated: 2017/08/25 23:21:39 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	btree_level_count(t_btree *root)
{
	return (root ? 1 +
			MAX(btree_level_count(root->left),
				btree_level_count(root->right))
			: 0);
}
