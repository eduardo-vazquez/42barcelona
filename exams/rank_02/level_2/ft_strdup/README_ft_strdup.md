### subject
```
Assignment name  : ft_strdup
Expected files   : ft_strdup.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Reproduce the behavior of the function strdup (man strdup).

Your function must be declared as follows:

char    *ft_strdup(char *src);
```
### code
```
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char 	*new_str;

	i = 0;
	while (src[i])
		i++;
	new_str= (char *)malloc(i * sizeof(char));
	i = 0;
	while (src[i])
	{
		new_str[i] = src[i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
```
