#include "../d05/ex05/ft_strstr.c"
#include "ft_putstr.c"
#include "ft_putchar.c"
#include <time.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
	clock_t start;
	clock_t end;
	long double cpu_time_used;
	char to_find[] = "lkasdj";
	char src[] = "hellolkasdjfo";

	start = clock();
	char *c = strstr("asdf qwerty", "");
	char *t = ft_strstr("asdf qwerty", "");
	end = clock();
	
	printf("%s", c);
	printf("\n%s", t);

	
	cpu_time_used = (long double)(end - start) / CLOCKS_PER_SEC;
	printf("\nCPU Time: %Lf\n", cpu_time_used);
}
