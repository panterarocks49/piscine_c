/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/18 03:10:25 by jbrown            #+#    #+#             */
/*   Updated: 2017/08/18 16:53:02 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour);
int		parse_hour(int h);

void	ft_takes_place(int hour)
{
	int		y;
	char	*xampm;
	char	*yampm;

	y = hour + 1;
	if (hour >= 0 && hour < 12)
		xampm = "A.M.";
	else
		xampm = "P.M.";
	if ((y >= 0 && y < 12) || y == 24)
		yampm = "A.M.";
	else
		yampm = "P.M.";
	hour = parse_hour(hour);
	y = parse_hour(y);
	printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 %s AND %d.00 %s",
			hour, xampm, y, yampm);
}

int		parse_hour(int h)
{
	if (h == 0 || h == 24)
		h = 12;
	else if (h > 12)
		h -= 12;
	return (h);
}
