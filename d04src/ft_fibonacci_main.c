#include "../d04/ex04/ft_fibonacci.c"
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
	int index;

	index = -20;
	start = clock();
	index = ft_fibonacci(index);
	end = clock();
	cpu_time_used = (long double)(end - start) / CLOCKS_PER_SEC;
	
	ft_putstr("Fib: ");
	ft_putnbr(index);
	ft_putchar('\n');
	printf("CPU Time: %Lf", cpu_time_used);
	ft_putchar('\n');
}
