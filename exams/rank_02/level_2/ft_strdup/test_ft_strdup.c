#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src);

int	main(int argc, char **argv)
{
	char *new_char;

	if (argc == 2)
	{
		new_char = ft_strdup(argv[1]);
		printf("new str: %s\n", new_char);
	}
	free (new_char);
	return (0);
}
