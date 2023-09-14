#include <unistd.h>

int	main(int argc, char ** argv)
{
	char	letter;
	int		i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])	
		{
			if (argv[1][i] == '_')
			{
				i++;
				letter = argv[1][i] - 32;
			}
			else
				letter  = argv[1][i];
			write(1, &letter, 1); 
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
