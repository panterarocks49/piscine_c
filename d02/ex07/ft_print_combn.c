/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 01:51:50 by jbrown            #+#    #+#             */
/*   Updated: 2017/08/10 23:14:45 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_combn(int n);
void	ft_print_array(int *tab, int l);
void	ft_make_comb(int *tab, int col, int n);
int		ft_putchar(char c);

void	ft_print_combn(int n)
{
	int tab[n];
	int col;
	int i;

	col = n - 1;
	i = 0;
	while (i <= n)
	{
		tab[i] = i;
		i++;
	}
	ft_print_array(tab, n);
	ft_make_comb(tab, col, n);
}

void	ft_print_array(int *tab, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		ft_putchar(tab[i] + '0');
		i++;
	}
}

void	ft_make_comb(int *tab, int col, int n)
{
	int i;

	while (1)
	{
		while (tab[col] == (9 + col - (n - 1)) && col >= 0)
		{
			col--;
		}
		if (col < 0)
		{
			break ;
		}
		tab[col]++;
		i = col + 1;
		while (i <= n)
		{
			tab[i] = tab[i - 1] + 1;
			i++;
		}
		col = n - 1;
		ft_putchar(',');
		ft_putchar(' ');
		ft_print_array(tab, n);
	}
}
