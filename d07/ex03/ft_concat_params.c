/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 03:20:04 by jbrown            #+#    #+#             */
/*   Updated: 2017/08/17 14:40:08 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_concat_params(int argc, char **argv);
int		ft_strlen(char *str);
char	*ft_strcat(char *dest, char *src);

char	*ft_concat_params(int argc, char **argv)
{
	char	*dst;
	char	**sargv;
	int		len;

	len = 0;
	sargv = ++(argv);
	while (*argv)
		argc += ft_strlen(*argv++) + 1;
	dst = (char*)malloc(len);
	while (*sargv)
	{
		ft_strcat(dst, *sargv++);
		if (*(sargv))
			ft_strcat(dst, "\n");
	}
	return (dst);
}

int		ft_strlen(char *str)
{
	char	*start;

	start = str;
	while (*str)
		str++;
	return (start - str);
}

char	*ft_strcat(char *dest, char *src)
{
	char	*d;

	d = dest;
	while (*dest)
		dest++;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (d);
}
