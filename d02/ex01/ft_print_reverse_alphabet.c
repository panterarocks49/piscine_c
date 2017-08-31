/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 16:47:50 by jbrown            #+#    #+#             */
/*   Updated: 2017/08/11 11:59:04 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);
void	ft_print_reverse_alphabet(void);

void	ft_print_reverse_alphabet(void)
{
	int a;
	int z;

	a = 'a';
	z = 'z';
	while (a <= z)
	{
		ft_putchar(z);
		z--;
	}
}
