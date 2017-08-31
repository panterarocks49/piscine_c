/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 17:14:09 by jbrown            #+#    #+#             */
/*   Updated: 2017/08/14 23:04:50 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str);

char	*ft_strcapitalize(char *str)
{
	char *s;

	s = str;
	while (*str != '\0')
	{
		if (((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
				&& (!(*(str - 1) >= '0' && *(str - 1) <= '9')
				&& !(*(str - 1) >= 'A' && *(str - 1) <= 'Z')
				&& !(*(str - 1) >= 'a' && *(str - 1) <= 'z')))
		{
			if (*str >= 'a' && *str <= 'z')
				*str -= 'a' - 'A';
		}
		else if (*str >= 'A' && *str <= 'Z')
			*str += 'a' - 'A';
		str++;
	}
	return (s);
}
