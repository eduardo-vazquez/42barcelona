#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int *a;
	int *b;
	int num_a;
	int num_b;

	num_a = 10;
	num_b = 20;
	a = &num_a;
	b = &num_b;

	printf("%d-%d\n", *a, *b);
	ft_swap(a, b);
	printf("%d-%d\n", *a, *b);
	return (0);
}
