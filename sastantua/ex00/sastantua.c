/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 01:43:03 by jbrown            #+#    #+#             */
/*   Updated: 2017/08/13 16:17:34 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	sastantua(int size);
int		find_rows(int size);
int		get_offset(int row, char opt);

void	sastantua(int size)
{
	int total_rows;
	int start;
	int row;
	int i;

	total_rows = find_rows(size);
	row = 0;
	i = -1;
	start = get_offset((total_rows - row - 1), 'I')
	while (row < total_rows)
	{
		while (++i < ((total_rows - row - 1)  + start)) 
		{
			while (j <= size)
				if (find_rows(j) == row)
					offset_interv
			ft_putchar('.');
		}
		i = -1;
		ft_putchar('/');
		while (++i < row * 2 + 1 + get_offset(row, 'O') * 2)
			ft_putchar('*');
		i = -1;
		ft_putchar('\\');
		ft_putchar('\n');
		row++;
	}
}

int		find_rows(int size)
{
	int i;
	int rows;

	i = 0;
	rows = 3;
	if (size <= 0)
		return (0);
	else if (size == 1)
		return (rows);
	else
	{
		while (i < size - 1)
		{
			rows = rows + 4 + i;
			i++;
		}
		return (rows);
	}
}

int		get_offset(int row, char opt)
{
	int last_offset_row;
	int offset_interval;
	int offset;
	int i;

	i = 1;
	offset = 0;
	if (opt == 'I')
	{
		while (find_rows(i) <= row) 
		{
			last_offset_row = find_rows(i);
			if (last_offset_row == 3)
				offset_interval = 2;
			else if (i % 2 == 1)
				offset_interval++;
			offset += offset_interval;
			i++;
		}
	}
	else if (opt == "K")
	{

	}
	else 
	{
		while (find_rows(i) <= row) 
		{
			last_offset_row = find_rows(i);
			if (last_offset_row == 3)
				offset_interval = 2;
			else if (i % 2 == 1)
				offset_interval++;
			offset += offset_interval;
			i++;
		}
	}
		return offset;

}
