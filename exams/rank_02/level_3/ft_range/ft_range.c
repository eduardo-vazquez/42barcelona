#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int start, int end)
{
	int size;
	int	i;
	int	*array;

	i = 0;
	size = end - star + 1;;
	array = (int *)malloc(size * sizeof(int));
	if (array == NULL)
		return (NULL);
	while (i < size)
		array[i++] = start++;
	return (array);
}
