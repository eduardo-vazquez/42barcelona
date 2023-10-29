#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	int prime_factor = 1;
	int number = atoi(argv[1]);

	if (argc == 2)
	{
		while (number >= ++prime_factor)
		{
			if (number % prime_factor == 0)
			{
				printf("%d", prime_factor);
				if (number == prime_factor)
					break;
				printf("*");
				number = number / prime_factor;
				prime_factor = 1;
			}
		}
	}
	printf("\n");
	return (0);
}
