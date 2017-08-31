/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 15:33:45 by jbrown            #+#    #+#             */
/*   Updated: 2017/08/16 20:06:42 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_putstr(char *str);

int		main(int argc, char **argv)
{
	if (argc == 1)
		return (0);
	*argv++ = (char*)(0);
	while (*argv)
		argv++;
	while (*--argv)
	{
		ft_putstr(*argv);
		ft_putchar('\n');
	}
	return (0);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}
