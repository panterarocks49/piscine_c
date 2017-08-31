#include "../jbrown/ex20/ft_putnbr_base.c"
#include "ft_putstr.c"
#include "ft_putchar.c"
#include "ft_putnbr.c"
#include <time.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
	clock_t start;
	clock_t end;
	long double cpu_time_used;
	int nb = 20;
	int b = 10;

	start = clock();
	ft_putnbr_base(2147483647, "01234567");
	ft_putnbr_base(-2147483648, "01234567");
	ft_putchar('\n');
	end = clock();
	
	cpu_time_used = (long double)(end - start) / CLOCKS_PER_SEC;
	printf("\nCPU Time: %Lf\n", cpu_time_used);
}
