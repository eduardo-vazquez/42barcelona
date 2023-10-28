### subject
```
Assignment name  : pgcd
Expected files   : pgcd.c
Allowed functions: printf, atoi, malloc, free
--------------------------------------------------------------------------------

Write a program that takes two strings representing two strictly positive
integers that fit in an int.

Display their highest common denominator followed by a newline (It's always a
strictly positive integer).

If the number of parameters is not 2, display a newline.

Examples:

$> ./pgcd 42 10 | cat -e
2$
$> ./pgcd 42 12 | cat -e
6$
$> ./pgcd 14 77 | cat -e
7$
$> ./pgcd 17 3 | cat -e 
1$
$> ./pgcd | cat -e
$
```
### code
```
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char** argv)
{
	int	num_a;
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
	return(0);
}
```
