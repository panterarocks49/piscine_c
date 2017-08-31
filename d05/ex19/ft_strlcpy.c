/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 19:42:34 by jbrown            #+#    #+#             */
/*   Updated: 2017/08/15 20:53:40 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
int				ft_strlen(char *c);

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	char *s;

	s = src;
	if (size == 0)
		return (ft_strlen(src));
	while (*s && size != 1)
	{
		*dest = *s;
		dest++;
		s++;
		size--;
	}
	*dest = '\0';
	return (ft_strlen(src));
}

int				ft_strlen(char *c)
{
	char *s;

	s = c;
	while (*c)
		c++;
	return (c - s);
}
