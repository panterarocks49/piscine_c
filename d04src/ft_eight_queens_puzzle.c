#include "../d04-verif/ex08/ft_eight_queens_puzzle.c"
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
	nb = ft_eight_queens_puzzle();
	end = clock();
	cpu_time_used = (long double)(end - start) / CLOCKS_PER_SEC;
	
	printf("%d solutions.\n", nb);
	printf("\nCPU Time: %Lf\n", cpu_time_used);
}
