#include "../ex06/ft_strlen.c"
#include "ft_putchar.c"
#include "ft_putnbr.c"

int main(void)
{
	char *str = "csdfg rsdfg ing";
	
	ft_putnbr(ft_strlen(str));
	ft_putchar('\n');
}
