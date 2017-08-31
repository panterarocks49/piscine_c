#include "../ex04/ft_ultimate_div_mod.c"
#include "ft_putchar.c"
#include "ft_putnbr.c"

int main(void)
{
	int a;
	int b;
	
	a = 42;
	b = 10;
	ft_ultimate_div_mod(&a, &b);
	ft_putnbr(a);
	ft_putchar('\n');
	ft_putnbr(b);
	ft_putchar('\n');
}
