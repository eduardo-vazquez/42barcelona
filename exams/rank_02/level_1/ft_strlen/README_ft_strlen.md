### subject
```
Assignment name  : ft_strlen
Expected files   : ft_strlen.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function that returns the length of a string.

Your function must be declared as follows:

int	ft_strlen(char *str);
```
### code
```
#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	char *str = "hola mundo";
	printf("%i\n", ft_strlen(str));
	return (0);
}
```
