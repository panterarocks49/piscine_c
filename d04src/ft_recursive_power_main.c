#include "../d04/ex03/ft_recursive_power.c"
#include "ft_putchar.c"
#include "ft_putnbr.c"
#include "ft_putstr.c"
#include <time.h>
#include <stdio.h>

int main(void)
{
	clock_t start;
	clock_t end;
	long double cpu_time_used;
	int x;
	int y;

	x = 2;
	y = 64;
	start = clock();
	x = ft_recursive_power(x, y);
	end = clock();
	cpu_time_used = (long double)(end - start) / CLOCKS_PER_SEC;
	
	ft_putstr("Power: ");
	ft_putnbr(x);
	ft_putchar('\n');
	printf("CPU Time: %Lf", cpu_time_used);
	ft_putchar('\n');
}
