# include <stdio.h>
# include <stdlib.h>

unsigned int	lcm(unsigned int a, unsigned int b);

int main( int argc, char** argv)
{
	if (argc == 3)
	{
		printf("the lowest common multiple of %d and %d is: %u\n", \
		atoi(argv[1]), \
		atoi(argv[2]), \
		lcm(atoi(argv[1]), atoi(argv[2])));
	}
	return (0);
}
