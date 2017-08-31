/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 22:34:11 by nocardoz          #+#    #+#             */
/*   Updated: 2017/08/13 23:39:21 by nocardoz         ###   ########.fr       */
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
					ft_chose('A', 'C', !j);
				else
					ft_putchar('B');
			else
				ft_chose('B', ' ', (j == 0 || j == x - 1));
			j++;
		}
		j = 0;
		ft_putchar('\n');
		i++;
	}
}
