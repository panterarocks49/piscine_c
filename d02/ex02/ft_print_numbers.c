/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 15:18:29 by jbrown            #+#    #+#             */
/*   Updated: 2017/08/10 13:06:01 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);
void	ft_print_numbers(void);

void	ft_print_numbers(void)
{
	int s;
	int e;

	s = '0';
	e = '9';
	while (s <= e)
	{
		ft_putchar(s);
		s++;
	}
}
