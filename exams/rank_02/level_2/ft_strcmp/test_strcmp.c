#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("func.    strcmp: %d\n", strcmp(argv[1], argv[2]));
		printf("func. ft_strcmp: %d\n", ft_strcmp(argv[1], argv[2]));
	}
	else
		printf("\n");
	return(0);
}
