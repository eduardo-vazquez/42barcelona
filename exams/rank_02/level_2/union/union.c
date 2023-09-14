#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		int	prev;
		int	i;
		int j;

		j = 0;
		i = 0;
		prev = 0;
		while (argv[1][i])
		{
			j = i;
			while (j >= 0)
			{
				if (argv[1][i] == argv[1][j])
					prev = 1;
				j--;
			}
			if (prev == 0)
				write(1, &argv[1][i], 1);
				
			i++;
		}

		while (argv[2][i])
	}
	write(1, "\n", 1);
	return (0);
}
