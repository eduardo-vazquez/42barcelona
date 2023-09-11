#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	num;

	i = 0;
	num = 0;
	if (argc == 4)
	{
		if (argv[2][0] == '+')
			num = atoi(argv[1]) + atoi(argv[3]);		
		if (argv[2][0] == '-')
			num = atoi(argv[1]) - atoi(argv[3]);		
		if (argv[2][0] == '*')
			num = atoi(argv[1]) * atoi(argv[3]);		
		if (argv[2][0] == '/')
			num = atoi(argv[1]) / atoi(argv[3]);		
		if (argv[2][0] == '%')
			num = atoi(argv[1]) % atoi(argv[3]);		
		printf("%d\n", num);
	}
	else
		write(1, "\n", 1);
	return (0);
}
