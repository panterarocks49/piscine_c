#include "../d03/ex08/ft_atoi.c"
#include "ft_putchar.c"
#include "ft_putnbr.c"
#include "ft_putstr.c"
#include <stdlib.h>

#include <stdio.h>

int main(void)
{
	char str[] = "\n +42f42";
	int ai = atoi(str);
	int ft_ai = ft_atoi(str);
	ft_putnbr(ai);
	ft_putchar('\n');
	ft_putnbr(ft_ai);
	ft_putchar('\n');
}
