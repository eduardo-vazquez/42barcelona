#include <stdio.h>

char	*ft_strcpy(char *s1, char *s2);

int	main(void)
{
	char	*str1 = "hola mundo";
	char	*str2;

	str2 = ft_strcpy(str2, str1);
	printf("%s\n", str2);
}
