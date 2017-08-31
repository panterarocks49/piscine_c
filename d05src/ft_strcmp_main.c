#include "../d05/ex06/ft_strcmp.c"
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
	char s1[] = "helloff";
	char s2[] = "hello";

	start = clock();
	int c = strcmp(s1, s2);
	int t = ft_strcmp(s1, s2);
	end = clock();
	
	ft_putnbr(c);
	ft_putchar('\t');
	ft_putnbr(t);
	
	cpu_time_used = (long double)(end - start) / CLOCKS_PER_SEC;
	printf("\nCPU Time: %Lf\n", cpu_time_used);
}
