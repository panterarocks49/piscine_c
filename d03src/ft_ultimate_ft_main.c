#include "../ex01/ft_ultimate_ft.c"
#include "ft_putchar.c"
#include "ft_putnbr.c"

int main(void)
{
	int a;
	int *ptr;
	int **ptr1;
	int ***ptr2;
	int ****ptr3;
	int *****ptr4;
	int ******ptr5;
	int *******ptr6;
	int ********ptr7;
	int *********ptr8;

	a = 42;
	ptr8 = &ptr7;
	ptr7 = &ptr6;
	ptr6 = &ptr5;
	ptr5 = &ptr4;
	ptr4 = &ptr3;
	ptr3 = &ptr2;
	ptr2 = &ptr1;
	ptr1 = &ptr;
	ptr = &a;
	ft_ultimate_ft(ptr8);
	ft_putnbr(a);
	ft_putchar('\n');
}
