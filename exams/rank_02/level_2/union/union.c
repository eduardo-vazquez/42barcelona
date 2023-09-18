#include <unistd.h>

int	ft_check_previous(char *str, int i, char c)
{
	i--;
	while (i >= 0)
	{
		if (str[i] == c)
			return (1);
		else 
			i--;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	i;
	int j;

	j = 0;
	i = 0;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			if (!ft_check_previous(argv[1], i, argv[1][i]))
				write(1, &argv[1][i++], 1);
			else
				i++;
		}
		while (argv[2][j])
		{
			if (!ft_check_previous(argv[1], i, argv[2][j]) && !ft_check_previous(argv[2], j, argv[2][j]))
				write(1, &argv[2][j++], 1);
			else
				j++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
