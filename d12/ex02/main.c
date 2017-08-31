/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 11:01:52 by jbrown            #+#    #+#             */
/*   Updated: 2017/08/24 22:48:14 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

int		main(void)
{
	int fd;

	fd = open("ft_tail", O_CREAT | O_TRUNC | O_WRONLY, 0755);
	write(fd, "/usr/bin/tail $@", 16);
	close(fd);
	return (0);
}
