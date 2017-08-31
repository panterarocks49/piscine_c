#include <stdio.h>
#include "../matchnmatch/ex00/match.c"
int		main(void)
{
	char *s1 = "";
	char *s2 = "*";
	int ret = 0;
	
	ret = match(s1, s2);
	printf("%d\n", ret);
}
