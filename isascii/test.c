#include "ft_isascii.c"
#include <stdio.h>

int main(void)
{
	int i = -5;
	while (i < 130)
	{
		printf("%c is character:%d.\n", (char)i, ft_isascii(i));
		i++;
	}
}
