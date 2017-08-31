/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/25 02:43:08 by jbrown            #+#    #+#             */
/*   Updated: 2017/08/25 23:05:57 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*btree_search_item(t_btree *root,
		void *data_ref,
		int (*cmpf)(void *, void *))
{
	void *out;

	out = ((void *)0);
	if (root)
	{
		out = btree_search_item(root->left, data_ref, cmpf);
		if (!out && (*cmpf)(data_ref, root->item) == 0)
			out = root->item;
		if (!out)
			out = btree_search_item(root->right, data_ref, cmpf);
	}
	return (out);
}
