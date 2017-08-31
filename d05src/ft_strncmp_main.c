#include "../jbrown/ex07/ft_strncmp.c"
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
	char s1[] = "z";
	char s2[] = "zz";
	int n = 3;

	start = clock();
	int t = ft_strncmp(s1, s2, n);
	int a = strncmp(s1, s2, n);
	end = clock();
	
	ft_putnbr(t);
	ft_putnbr(a);
	
	cpu_time_used = (long double)(end - start) / CLOCKS_PER_SEC;
	printf("\nCPU Time: %Lf\n", cpu_time_used);
}
