#include "ft_isalnum.c"
#include <stdio.h>

int main(void)
{
	int i = 0;
	while (i < 128)
	{
		printf("%c is character:%d.\n", (char)i, ft_isalnum(i));
		i++;
	}
}
