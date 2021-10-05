#include <stddef.h>

void *ft_memset(void *destination, int c, size_t n)
{
	size_t i = 0;
	char *p = *(char)destination;
	while (i < n)
	{
		p[i] = (char)c;
		i++;
	}
	return (p);
}
