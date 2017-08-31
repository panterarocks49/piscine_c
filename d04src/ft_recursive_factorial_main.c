#include "../d04/ex01/ft_recursive_factorial.c"
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

	fact = 13;
	start = clock();
	fact = ft_recursive_factorial(fact);
	end = clock();
	cpu_time_used = (long double)(end - start) / CLOCKS_PER_SEC;
	
	ft_putstr("Factorial: ");
	ft_putnbr(fact);
	ft_putchar('\n');
	printf("CPU Time: %Lf", cpu_time_used);
	ft_putchar('\n');
}
