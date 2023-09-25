#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int *ft_range(int star, int end);

int	main(int argc, char **argv)
{
	int	*array;
	int	i = 0;
	int j = atoi(argv[1]);
	int longitud = 0;

	array = ft_range(atoi(argv[1]), atoi(argv[2]));;
	longitud = atoi(argv[2]) - atoi(argv[1]) + 1;
	printf("longitud: %d\n", longitud);
	while (i < longitud)
		printf(" %d", array[i++]);
	free(array);
	return (0);
}
