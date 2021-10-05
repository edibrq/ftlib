#include <stdio.h>
#include "ft_strlen.c"
#include <string.h>

int main(int argc, char **argv)
{
	int i;
	for (i = 1; i < argc; i++)
		printf("%s len is: %ld lib len is:%ld \n", argv[i], ft_strlen(argv[i]), strlen(argv[i]));
}
