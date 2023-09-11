#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	ft_atoi(const char *str);

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
		printf("%d\n", ft_atoi(argv[1]));
	else 
		printf("\n");
	return (0);
}
