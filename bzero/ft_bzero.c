#include <stddef.h>

void ft_bzero(void *s, size_t n)
{
	int i = 0;
	char *p = (char *) s;
	while (i < n)
	{
		p[i] = '\0';
		i++;
	}
}
