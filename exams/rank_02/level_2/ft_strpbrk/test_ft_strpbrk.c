#include <stdio.h>
#include <string.h>

char	*ft_strpbrk(const char *s1, const char *s2);

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("strpbrk    : %s\n", strpbrk(argv[1], argv[2]));
		printf("ft_strfpbrk: %s\n", ft_strpbrk(argv[1], argv[2]));
	}
	return (0);
}
