#include <stdlib.h>
#include <stdio.h>
#include "ft_itoa.c"

char* ft_itoa(int);

int main(int argc, char** argv)
{
	if (argc == 2)
		printf("%s\n", ft_itoa(atoi(argv[1])));
	return (0);
}
