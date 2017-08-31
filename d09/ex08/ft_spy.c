/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/18 14:17:33 by jbrown            #+#    #+#             */
/*   Updated: 2017/08/18 16:21:59 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s1[j] == ' ' && s1[j])
		j++;
	while (s1[j] == s2[i] && s1[j] != '\0' && s2[i] != '\0' && s1[j + 1] != ' ')
	{
		i++;
		j++;
	}
	return (s1[j] - s2[i]);
}

char	*s_lc(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	while (i < argc)
	{
		if (ft_strcmp(s_lc(argv[i]), "president") == 0 ||
				ft_strcmp(s_lc(argv[i]), "attack") == 0 ||
				ft_strcmp(s_lc(argv[i]), "powers") == 0)
		{
			ft_putstr("Alert!!!");
			return (0);
		}
		i++;
	}
}
