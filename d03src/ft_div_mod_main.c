#include "../ex03/ft_div_mod.c"
#include "ft_putchar.c"
#include "ft_putnbr.c"

int main(void)
{
	int a;
	int b;
	int div;
	int mod;
	
	a = 42;
	b = 10;
	ft_div_mod(a, b, &div, &mod);
	ft_putnbr(div);
	ft_putchar('\n');
	ft_putnbr(mod);
	ft_putchar('\n');
}
