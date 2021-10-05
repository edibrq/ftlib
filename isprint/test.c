#include "ft_isprint.c"
#include <stdio.h>

int main(void)
{
	int i = 0;
	while (i < 135)
	{
		printf("%c is character:%d.\n", (char)i, ft_isprint(i));
		i++;
	}
}
