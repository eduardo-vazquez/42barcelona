### subject
```
Assignment name	: ft_strcspn
Expected files	: ft_strcspn.c
Allowed functions: None
---------------------------------------------------------------

Reproduce exactly the behavior of the function strcspn
(man strcspn).

The function should be prototyped as follows:

size_t	ft_strcspn(const char *s, const char *reject);
```
### code
```
#include <stdio.h>
#include <string.h>

int	main(int argc, char **argc)
{
	if (argc == 3)
	{
		printf("func.    strcspn: %zu\n", strcspn(argv[1], argv[2]));
		printf("func. ft_strcspn: %zu\n", ft_strcspn(argv[1], argv[2]));
	}
	return (0);
}
```
