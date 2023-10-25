###subject
```
Assignment name  : max
Expected files   : max.c
Allowed functions:
--------------------------------------------------------------------------------

Write the following function:

int		max(int* tab, unsigned int len);

The first parameter is an array of int, the second is the number of elements in
the array.

The function returns the largest number found in the array.

If the array is empty, the function returns 0.
```
### code
```
int	max(int	*tab, unsigned int len)
{
	int	i;
	int	num;

	i = 1;
	num = tab[0];
	if (len > 1)
	{
		while (i < len)
		{
			if (num < tab[i])
				num = tab[i]; 
			i++;	
		}
	}
	else if (len == 0)
		return (0);
	return(num);
}
```
