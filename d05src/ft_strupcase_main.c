#include "../d05/ex08/ft_strupcase.c"
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
	char s1[] = "helL44off";
	int n = 6;

	start = clock();
	char *up = ft_strupcase(s1);
	end = clock();
	
	ft_putstr(up);;
	
	cpu_time_used = (long double)(end - start) / CLOCKS_PER_SEC;
	printf("\nCPU Time: %Lf\n", cpu_time_used);
}
