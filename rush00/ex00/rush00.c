/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 12:45:03 by jbrown            #+#    #+#             */
/*   Updated: 2017/08/13 23:39:45 by nocardoz         ###   ########.fr       */
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
				ft_chose('o', '-', (j == 0 || j == x - 1));
			else
				ft_chose('|', ' ', (j == 0 || j == x - 1));
			j++;
		}
		j = 0;
		ft_putchar('\n');
		i++;
	}
}
