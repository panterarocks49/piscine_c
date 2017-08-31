/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 18:45:01 by jbrown            #+#    #+#             */
/*   Updated: 2017/08/22 22:07:37 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 != *s2)
		return (*s1 - *s2);
	else
		return (0);
}

void	ft_sort_wordtab(char **tab)
{
	char	*tmpstr;
	char	**place;

	place = tab;
	while (*(++place))
	{
		if (ft_strcmp(*(place - 1), *place) > 0)
		{
			tmpstr = *place;
			*place = *(place - 1);
			*(place - 1) = tmpstr;
			place = tab;
		}
	}
}
