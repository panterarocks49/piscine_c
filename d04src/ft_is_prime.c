#include "../d04-verif/ex06/ft_is_prime.c"
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
	int prime;
	int is_prime;

	prime = 2147483629;
	start = clock();
	is_prime = ft_is_prime(prime);
	end = clock();
	cpu_time_used = (long double)(end - start) / CLOCKS_PER_SEC;
	
	if (is_prime)
		printf("The num %d is prime.", prime);
	else
		printf("The num %d is not prime.", prime);
	printf("\n");
	printf("CPU Time: %Lf", cpu_time_used);
	printf("\n");
}
