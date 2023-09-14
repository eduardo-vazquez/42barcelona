#include <stdio.h>
#include <string.h>

int	max(int *tab, unsigned int len);

int main(int argc, char **argv)
{
	int	tab[6] = {1, 2, 3, 40, 5, 10};
	printf("el mayor es: %d\n", max(tab, 6));
	return (0);
}
