/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 09:25:17 by jbrown            #+#    #+#             */
/*   Updated: 2017/08/12 20:56:49 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb);

int		ft_sqrt(int nb)
{
	int try_root;

	try_root = 1;
	if (nb < 0 || nb == 2147483647)
		return (0);
	while (try_root * try_root < nb)
		try_root++;
	if ((try_root * try_root) == nb)
		return (try_root);
	else
		return (0);
}
