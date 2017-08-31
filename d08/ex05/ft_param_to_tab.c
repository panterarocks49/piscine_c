/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 20:42:25 by jbrown            #+#    #+#             */
/*   Updated: 2017/08/18 23:30:42 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"
#include <stdlib.h>

int					ft_strlen(char *str);
char				*ft_strdup(char *src);
char				*ft_strcpy(char *dest, char *src);

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	t_stock_par *first_struc;
	t_stock_par *struc;

	first_struc = (t_stock_par *)malloc(sizeof(t_stock_par) * (ac + 1));
	struc = first_struc;
	while (ac--)
	{
		struc->copy = ft_strdup(*av);
		struc->str = *av;
		struc->tab = ft_split_whitespaces(*av);
		struc->size_param = ft_strlen(*av);
		struc++;
		av++;
	}
	struc->str = 0;
	return (first_struc);
}

int					ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char				*ft_strdup(char *src)
{
	char *dest;

	dest = (char *)malloc(ft_strlen(src));
	ft_strcpy(dest, src);
	return (dest);
}

char				*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (dest[i])
		dest[i] = '\0';
	return (dest);
}
