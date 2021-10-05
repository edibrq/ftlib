#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "ft_memset.c"


int main(void)
{
	char *str = malloc(100 * sizeof (char));
	ft_memset(str, '0', 101);
	printf("%s\n", str);
}
