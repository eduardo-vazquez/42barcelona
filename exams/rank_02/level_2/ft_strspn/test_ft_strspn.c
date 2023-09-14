#include <stdio.h>
#include <string.h>

size_t	ft_strspn(const char *s, const char *accept);

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("strspn   : %zu\n", strspn(argv[1], argv[2]));
		printf("ft_strspn: %zu\n", ft_strspn(argv[1], argv[2]));
	}
	return (0);
}
