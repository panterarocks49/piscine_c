/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 18:52:16 by jbrown            #+#    #+#             */
/*   Updated: 2017/08/21 18:57:04 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *))
{
	char	*tmpstr;
	char	**place;

	place = tab;
	while (*(++place))
	{
		if (cmp(*(place - 1), *place) > 0)
		{
			tmpstr = *place;
			*place = *(place - 1);
			*(place - 1) = tmpstr;
			place = tab;
		}
	}
}
