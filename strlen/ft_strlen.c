#include <stddef.h>

size_t ft_strlen(const char *str)
{
	int l = 0;
	while (*str++)
		l++;
	return (l);
}
