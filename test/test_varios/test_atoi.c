#include <stdio.h>
#include "../../push_swap/include/libft/ft_atoi.c"

int	main(int argc, char** argv)
{
	if (argc == 2)
	{
		printf("la strting : %s, ft_atoi int: %+d\n", argv[1], ft_atoi(&argv[1][0]));
		printf("la strting : %s, atoi    int: %+d\n", argv[1], atoi(&argv[1][0]));
	}
}
