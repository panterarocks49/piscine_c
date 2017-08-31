#include "../ex07/ft_strrev.c"
#include "ft_putchar.c"
#include "ft_putnbr.c"
#include "ft_putstr.c"

#include <stdio.h>

int main(void)
{
	char str[] = "PRoGaMming Is a FuCkiNg BitCgH!";
	
	char *output = ft_strrev(str);

	ft_putchar('\n');
	ft_putstr(output);
	ft_putchar('\n');
}
