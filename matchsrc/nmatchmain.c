#include <stdio.h>
#include "../matchnmatch/ex01/nmatch.c"

int		main(void)
{
	char *s1 = "abc";
	char *s2 = "a**";
	int ret = 0;
	
	ret = nmatch(s1, s2);
	printf("%d\n", ret);
}
