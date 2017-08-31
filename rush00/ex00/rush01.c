/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 21:53:31 by nocardoz          #+#    #+#             */
/*   Updated: 2017/08/16 09:29:09 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_chose(char c1, char c2, int choice)
{
	if (choice)
		ft_putchar(c1);
	else
		ft_putchar(c2);
}

void	rush(int x, int y)
{
	int i;
	int j;

	if (x <= 0 || y <= 0)
		return ;
	i = 0;
	j = 0;
	while (i < y)
	{
		while (j < x)
		{
			if (i == 0 || i == y - 1)
				if (j == 0 || j == x - 1)
					ft_chose('/', '\\', !(j % x) ^ !!i);
				else
					ft_putchar('*');
			else
				ft_chose('*', ' ', (j == 0 || j == x - 1));
			j++;
		}
		j = 0;
		ft_putchar('\n');
		i++;
	}
}
