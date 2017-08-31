/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 16:46:37 by jbrown            #+#    #+#             */
/*   Updated: 2017/08/11 11:20:27 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);
void	ft_print_alphabet(void);

void	ft_print_alphabet(void)
{
	int a;
	int z;

	a = 'a';
	z = 'z';
	while (a <= z)
	{
		ft_putchar(a);
		a++;
	}
}
