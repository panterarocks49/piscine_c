/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 19:17:42 by jbrown            #+#    #+#             */
/*   Updated: 2017/08/10 16:00:25 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);
void	ft_print_comb2(void);

void	print_all(char c1, char c2, char c3, char c4)
{
	ft_putchar(c1);
	ft_putchar(c2);
	ft_putchar(' ');
	ft_putchar(c3);
	ft_putchar(c4);
	if (c1 != '9' || c2 != '8' || c3 != '9' || c4 != '9')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	char i;
	char j;
	char k;
	char l;

	i = '0' - 1;
	j = '0' - 1;
	k = '0' - 1;
	l = '1' - 1;
	while (++i <= '9')
	{
		while (++j <= '9')
		{
			while (++k <= '9')
			{
				while (++l <= '9')
				{
					print_all(i, j, k, l);
				}
				l = j + 1;
			}
			k = i - 1;
		}
		j = '0';
	}
}
