#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char** argv)
{
	int num_a;
	int num_b;

	if (argc == 3)
	{
		num_a = atoi(argv[1]);
		num_b = atoi(argv[2]);
		if (num_a > 0 && num_b > 0)
		{
			while (num_a != num_b)
			{
				if (num_a > num_b)
					num_a -= num_b;
				else
					num_b -= num_a;
			}
			printf("%d", num_a);
		}
	}
	printf("\n");
	return (0);
}
