#include "../d05/ex13/ft_str_is_lowercase.c"
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
	char s1[] = "lskdjFf";
	int n = 6;

	start = clock();
	int up = ft_str_is_lowercase(s1);
	end = clock();
	
	ft_putnbr(up);
	
	cpu_time_used = (long double)(end - start) / CLOCKS_PER_SEC;
	printf("\nCPU Time: %Lf\n", cpu_time_used);
}
