#include "../d05/ex03/ft_strcpy.c"
#include "ft_putchar.c"
#include <time.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
	clock_t start;
	clock_t end;
	long double cpu_time_used;
	char dest[10];
	char src[] = "hello";

	start = clock();
	char *c = ft_strcpy(dest, src);
	end = clock();
	
	printf("%s", c);
	
	cpu_time_used = (long double)(end - start) / CLOCKS_PER_SEC;
	printf("\nCPU Time: %Lf\n", cpu_time_used);
}
