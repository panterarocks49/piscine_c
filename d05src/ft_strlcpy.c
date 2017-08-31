#include "../d05/ex19/ft_strlcpy.c"
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
	char s1[40] = "\0zxcvzxcvzxcvzxcvzxcv";

	start = clock();
	int a = ft_strlcpy(s1, "asdf", 16);
	ft_putnbr(a);
	ft_putchar('-');
	ft_putstr(s1);
	ft_putchar('\n');
	int b = ft_strlcpy(s1, "uiop", 0);
	ft_putnbr(b);
	ft_putchar('-');
	ft_putstr(s1);
	ft_putchar('\n');
	end = clock();
	b = ft_strlcpy(s1, "qwerty", 4);
	ft_putnbr(b);
	ft_putchar('-');
	ft_putstr(s1);
	ft_putchar('\n');
	end = clock();
	
	cpu_time_used = (long double)(end - start) / CLOCKS_PER_SEC;
	printf("\nCPU Time: %Lf\n", cpu_time_used);
}
