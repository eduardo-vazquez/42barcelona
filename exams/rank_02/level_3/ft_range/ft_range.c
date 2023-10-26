#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int size;
	int index;
	int *array;

	index = 0;
	if (start < end)
		size = end - start + 1;
	else
		size = start - end + 1;
	array = (int*)malloc(size * sizeof(int));
	if (!array)
		return (NULL);
	while (index < size)
	{
		if (start < end)
			array[index++] = start++;
		else
			array[index++] = start--;
	}
	return (array);
}
