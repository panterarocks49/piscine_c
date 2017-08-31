/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 13:54:52 by jbrown            #+#    #+#             */
/*   Updated: 2017/08/17 14:06:34 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_words_tables(char **tab);
void	ft_putchar(char c);
void	ft_putstr(char *str);

void	ft_print_words_tables(char **tab)
{
	while (*tab)
	{
		ft_putstr(*tab++);
		ft_putchar('\n');
	}
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}
