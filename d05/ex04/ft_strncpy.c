/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 11:40:01 by jbrown            #+#    #+#             */
/*   Updated: 2017/08/14 13:19:01 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n);

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char *d;

	d = dest;
	while (n > 0 && *src != '\0')
	{
		*d++ = *src++;
		--n;
	}
	while (n > 0)
	{
		*d++ = '\0';
		--n;
	}
	return (dest);
}
