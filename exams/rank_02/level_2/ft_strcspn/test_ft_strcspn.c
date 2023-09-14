#include <stdio.h>
#include <string.h>

int	main(int argc, char **argc)
{
	if (argc == 3)
	{
		printf("func.    strcspn: %zu\n", strcspn(argv[1], argv[2]));
		printf("func. ft_strcspn: %zu\n", ft_strcspn(argv[1], argv[2]));
	}
	return (0);
}
