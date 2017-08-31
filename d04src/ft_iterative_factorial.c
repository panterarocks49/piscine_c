#include "../d04-verif/ft_iterative_factorial.c"
#include "ft_putchar.c"
#include "ft_putnbr.c"
#include "ft_putstr.c"
#include <time.h>
#include <stdio.h>

int main(void)
{
	int fact;
	clock_t start;
	clock_t end;
	long double cpu_time_used;

	fact = 0;
	start = clock();
	fact = ft_iterative_factorial(fact);
	end = clock();
	cpu_time_used = (long double)(end - start) / CLOCKS_PER_SEC;
	
	ft_putstr("Factorial: ");
	ft_putnbr(fact);
	printf("CPU Time: %Lf", cpu_time_used);
	ft_putchar('\n');
}
