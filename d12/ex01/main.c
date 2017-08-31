/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 11:01:52 by jbrown            #+#    #+#             */
/*   Updated: 2017/08/24 22:02:25 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat.h"

void	print_err(char *c)
{
	if (errno != 0)
	{
		err_putstr("cat: ");
		err_putstr(c);
	}
	if (errno == ENOENT)
		err_putstr(": No such file or directory\n");
	else if (errno == EACCES)
		err_putstr(": Permission denied\n");
	else if (errno == EISDIR)
		err_putstr(": Is a directory\n");
}

int		main(int argc, char **argv)
{
	char	buf[BUF_SIZE + 1];
	int		fd;
	int		ret;

	if (argc == 1)
		while ((ret = read(0, buf, BUF_SIZE)))
			write(1, buf, ret);
	while (*++argv)
	{
		fd = open(*argv, O_RDONLY);
		if (errno == 0)
		{
			while ((ret = read(fd, buf, BUF_SIZE)))
			{
				if (errno == 0)
					write(1, buf, ret);
				else
					break ;
			}
			close(fd);
		}
		print_err(*argv);
	}
	return (errno);
}
