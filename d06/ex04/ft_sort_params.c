/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 16:20:19 by jbrown            #+#    #+#             */
/*   Updated: 2017/08/16 19:48:54 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strcmp(char *s1, char *s2);

int		main(int argc, char **argv)
{
	char	*tmpstr;
	char	**place;

	if (argc == 1)
		return (0);
	place = ++argv;
	while (*(++place))
	{
		if (ft_strcmp(*(place - 1), *place) > 0)
		{
			tmpstr = *place;
			*place = *(place - 1);
			*(place - 1) = tmpstr;
			place = argv;
		}
	}
	while (*argv)
	{
		ft_putstr(*argv++);
		ft_putchar('\n');
	}
	return (0);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

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
