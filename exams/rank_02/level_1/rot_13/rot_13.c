#include <unistd.h>

char	ft_add_13_char(char c)
{
	if (c >= 65 && c <= 90)
	{
		if (c <= 77)
			return (c + 13);
		else if (c > 77)
			return (c - 13);
	}
	else if (c >= 97 && c <= 122)
	{
		if (c <= 109)
			return (c + 13);
		else if (c > 109)
			return (c - 13);
	}
	return (c);
}

int	main(int argc, char **argv)
{
	int		i;
	char	c;

	i = 0;
	if (argc == 2)
	{
		while(argv[1][i])
		{
			c = ft_add_13_char(argv[1][i++]);
			write(1, &c, 1);
		}
	}
	write(1, "\n", 1);
	return(0);
}
