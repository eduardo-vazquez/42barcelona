#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int *ft_range(int star, int end);

int	main(int argc, char **argv)
{
	int	*array;
	int	i = 0;
	int longitud = 0;

	(void)argc;
	array = ft_range(atoi(argv[1]), atoi(argv[2]));;
	if (atoi(argv[1]) < atoi(argv[2]))
		longitud = atoi(argv[2]) - atoi(argv[1]) + 1;
 	else	
		longitud = atoi(argv[1]) - atoi(argv[2]) + 1;
	printf("longitud: %d\n", longitud);
	while (i < longitud)
		printf(" %d ", array[i++]);
	printf("\n");
	free(array);
	return (0);
}
