#include <stdlib.h>

int* ft_rrange(int start, int end)
{
	int* array;
	int index;
	int size;
	
	index = 0;
	size = end - start + 1;
	if (size < 0)
		size *= -1;
	array = (int*)malloc(size * sizeof(int));
	if (!array)
		return (NULL);
	while (index < size)
	{
		if (start < end)
			array[index++] = end--;
		else
			array[index++] = end++;
	}
	return (array);
}
