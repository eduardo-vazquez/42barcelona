#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	int j;
	int	match;

	i = 0;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			j = 0;
			match = 0;
			while (argv[2][j] && match == 0)
			{
				if (argv[1][i] == argv[2][j] && argv[1][i] != argv[1][i - 1]) //mejorar que no vaya a -1
				{
					write(1, &argv[1][i], 1);
					match = 1;
					j++;
				}
				else
					j++;
			}
		i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
