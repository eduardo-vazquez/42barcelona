#include <unistd.h>

int main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2 && argv[1][0] != '\0')
	{
		while (argv[1][i] && (argv[1][i] == ' ' || argv[1][i] == '\t'))
			i++;
		while (argv[1][i])
		{
			while (argv[1][i] >= 33 && argv[1][i] <= 126)
				write(1, &argv[1][i++], 1);
			if (argv[1][i] == ' ' || argv[1][i] == '\t')
			{
				write(1, " ", 1);
				i++;
				while (argv[1][i] == ' ' || argv[1][i] == '\t')
					i++;
			}
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}
