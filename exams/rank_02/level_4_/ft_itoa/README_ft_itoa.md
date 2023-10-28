### subject
```
Assignment name  : ft_itoa
Expected files   : ft_itoa.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write a function that takes an int and converts it to a null-terminated string.
The function returns the result in a char array that you must allocate.

Your function must be declared as follows:

char	*ft_itoa(int nbr);
```
### code 
```
char* ft_itoa(int nbr)
{
	int 	num = nbr;
	int 	len = 0;
	char* 	num_str;

	if (nbr == -2147483648)
		return ("-2147483648\0");
	if (nbr < 0)
		len++;
	while (num)
	{
		num = num / 10;
		len++;
	}
	num_str = (char*)malloc(len * sizeof(char));
	if (!num_str)
		return (NULL);
	if (nbr == 0)
		return ("0\0");
	if (nbr < 0)
	{
		num_str[0] = '-';
		nbr = nbr * -1;
	}
	while (nbr)
	{
		num_str[--len] = nbr % 10 + '0';
		nbr = nbr / 10;
	}
	return (num_str);
}
```
