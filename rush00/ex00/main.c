/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 12:06:15 by nocardoz          #+#    #+#             */
/*   Updated: 2017/08/27 15:19:29 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int x, int y);

int		ft_atoi(char *str)
{
	int i;
	int atoi;
	int neg;

	i = 0;
	neg = 0;
	atoi = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' ||
			str[i] == '\r' || str[i] == '\f' || str[i] == '\v')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg = 1;
		i++;
	}
	while ((str[i] != '\0') && (str[i] >= '0') && (str[i] <= '9'))
	{
		atoi *= 10;
		atoi += str[i] - '0';
		i++;
	}
	if (neg)
		return (-atoi);
	return (atoi);
}

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int		main(int argc, char *argv[])
{
	int x;
	int y;

	if (argc == 3)
	{
		x = ft_atoi(argv[1]);
		y = ft_atoi(argv[2]);
		rush(x, y);
	}
	return (0);
}
