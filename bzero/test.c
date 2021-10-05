#include <strings.h>
#include <stdio.h>
#include "ft_bzero.c"
#include <stdlib.h>

void init_str(char *str)
{
	for (int i = 0; i < 11; i++)
		str[i] = (char) (65 + i);
}

int main(void)
{
	char *s = malloc(10 * sizeof (char));
	init_str(s);
	printf("%s\n", s);
	ft_bzero(s, 10);
	printf("%s\n", s);
}
