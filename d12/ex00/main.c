/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 11:01:52 by jbrown            #+#    #+#             */
/*   Updated: 2017/08/29 03:04:19 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"

int		check_argc(int ac)
{
	if (ac != 2)
	{
		if (ac > 2)
			err_putstr("Too many arguments.\n");
		else if (ac < 2)
			err_putstr("File name missing.\n");
		return (1);
	}
	return (0);
}

int		main(int argc, char **argv)
{
	char	buf[BUF_SIZE + 1];
	int		fd;
	int		ret;

	if (check_argc(argc))
		return (1);
	fd = open(argv[1], O_RDONLY);
	while ((ret = read(fd, buf, BUF_SIZE)))
		write(1, buf, ret);
	close(fd);
	return (0);
}
