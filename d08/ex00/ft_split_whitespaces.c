/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 10:35:31 by jbrown            #+#    #+#             */
/*   Updated: 2017/08/17 14:55:45 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	**ft_split_whitespaces(char *str);
int		find_nwhitespaces(char *str);
int		find_wordlen(char *str);

char	**ft_split_whitespaces(char *str)
{
	char	**dest;
	char	**sdest;
	char	*start;
	int		ndel;

	ndel = find_nwhitespaces(str);
	dest = malloc(sizeof(*dest) * (ndel + 1));
	sdest = dest;
	while (ndel > 0)
	{
		if (*str != ' ' && *str != '\t' && *str != '\n' && *str)
		{
			*dest = malloc(sizeof(char*) * find_wordlen(str) + 1);
			start = *dest;
			while (*str != ' ' && *str != '\t' && *str != '\n' && *str)
				*(*dest)++ = *str++;
			**dest = '\0';
			*dest++ = start;
			ndel--;
		}
		else
			str++;
	}
	*dest = 0;
	return (sdest);
}

int		find_nwhitespaces(char *str)
{
	int		i;
	char	*start;

	i = 0;
	start = str;
	while (*start)
	{
		if (*start != ' ' && *start != '\t' && *start != '\n')
		{
			i++;
			while (*start != ' ' && *start != '\t' && *start != '\n' && *start)
				start++;
		}
		else
			start++;
	}
	return (i);
}

int		find_wordlen(char *str)
{
	char *start;

	start = str;
	while (*start != ' ' && *start != '\t' && *start != '\n' && *start)
		start++;
	return (start - str);
}
