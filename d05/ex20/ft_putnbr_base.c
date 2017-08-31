/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 01:12:44 by jbrown            #+#    #+#             */
/*   Updated: 2017/08/15 23:37:45 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);
void	ft_putnbr_base(int nbr, char *base);
int		parse_base(char *base);
int		is_repeated(char *base, char c);

void	ft_putnbr_base(int nbr, char *base)
{
	long b;
	long nb;

	nb = nbr;
	b = parse_base(base);
	if (b == 0 || b == 1)
		return ;
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb >= b)
		ft_putnbr_base((long)(nb / b), base);
	ft_putchar(base[(long)(nb % b)]);
}

int		parse_base(char *base)
{
	char *bn;

	bn = base;
	while (*bn)
	{
		if (is_repeated(bn + 1, *bn))
			return (0);
		bn++;
	}
	return (bn - base);
}

int		is_repeated(char *base, char c)
{
	char	*bs;
	int		count;

	bs = base;
	count = 0;
	while (*bs)
	{
		if (*bs == c)
			count++;
		if (count == 1)
			return (1);
		bs++;
	}
	return (0);
}
