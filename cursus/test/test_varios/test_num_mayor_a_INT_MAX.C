#include <stdio.h>
#include <limits.h>

int main(void)
{
	int	num_max = INT_MAX;
	int num_min = INT_MIN;

	
	printf("num_max: %+d\nnum_min: %+d\n", num_max, num_min);

	num_max += 1;
	num_min -= 1;
	printf("num_max + 1: %+d\nnum_min - 1: %+d\n\n", num_max, num_min);

	num_max += 1;
	num_min -= 1;
	printf("num_max + 1: %+d\nnum_min - 1: %+d\n\n", num_max, num_min);

	num_max += 1;
	num_min -= 1;
	printf("num_max + 1: %+d\nnum_min - 1: %+d\n\n", num_max, num_min);

	num_max += 1;
	num_min -= 1;
	printf("num_max + 1: %+d\nnum_min - 1: %+d\n\n", num_max, num_min);
	
	num_max += 1;
	num_min -= 1;
	printf("num_max + 1: %+d\nnum_min - 1: %+d\n\n", num_max, num_min);
	
	return (0);
}
