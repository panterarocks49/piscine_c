#include "../jbrown/ex09/ft_eight_queens_puzzle_2.c"
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
	int nb;

	nb = 0;
	start = clock();
	ft_eight_queens_puzzle_2();
	end = clock();
	cpu_time_used = (long double)(end - start) / CLOCKS_PER_SEC;
	
	printf("\nCPU Time: %Lf\n", cpu_time_used);
}
