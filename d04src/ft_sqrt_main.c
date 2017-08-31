#include "../d04/ex05/ft_sqrt.c"
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
	int square;
	int root;

	square = 2147483640;
	start = clock();
	root = ft_sqrt(square);
	end = clock();
	cpu_time_used = (long double)(end - start) / CLOCKS_PER_SEC;
	
	printf("The sqrt of %d is %d.", square, root);
	printf("\n");
	printf("CPU Time: %Lf", cpu_time_used);
	printf("\n");
}
