/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 23:37:18 by jbrown            #+#    #+#             */
/*   Updated: 2017/08/28 13:22:57 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char **str)
{
	int atoi;
	int neg;

	neg = 0;
	atoi = 0;
	while (**str == ' ' || **str == '\n' || **str == '\t' ||
			**str == '\r' || **str == '\f' || **str == '\v')
		++*str;
	if (**str == '-' || **str == '+')
	{
		if (**str == '-')
			neg = 1;
		++*str;
	}
	while (**str == ' ')
		++*str;
	while ((**str != '\0') && (**str >= '0') && (**str <= '9'))
	{
		atoi *= 10;
		atoi += **str - '0';
		++*str;
	}
	if (neg)
		return (-atoi);
	return (atoi);
}

void	itoa_write(int nb, char **str)
{
	if (nb == -2147483648)
	{
		*(*str)++ = '-';
		*(*str)++ = '2';
		itoa_write(147483648, str);
	}
	else
	{
		if (nb < 0)
		{
			**str = '-';
			(*str)++;
			nb = -nb;
		}
		if (nb >= 10)
		{
			itoa_write((nb / 10), str);
			itoa_write((nb % 10), str);
		}
		else
		{
			**str = nb + '0';
			(*str)++;
		}
	}
}
