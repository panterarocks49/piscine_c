#include "../verif/ex09/ft_sort_integer_table.c"
#include "ft_putchar.c"
#include "ft_putnbr.c"
#include "ft_putstr.c"

#include <stdio.h>

int main(void)
{
	const int	x = 12;
	int			tab[x] = {1, 0, 1234, 123, 8, 1, 5, 132, 8, 9, 10, 3};
	int			i;
	
	ft_sort_integer_table(tab, x);
	i = 0;
	while (i < x)
	{
		ft_putnbr(tab[i]);
		ft_putchar(' ');
		i++;
	}
	ft_putchar('\n');
}
