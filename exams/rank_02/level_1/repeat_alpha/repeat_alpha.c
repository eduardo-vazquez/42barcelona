#include <unistd.h>

void	ft_putchar_n(char c, int i)
{
	while (i > 0)
	{
		write(1, &c, 1);
		i--;
	}
}

void	ft_repeat_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 65  && str[i] <= 90)
			ft_putchar_n(str[i], str[i] - 65);
		else if (str[i] >= 97 && str[i] <= 121)
			ft_putchar_n(str[i], str[i] - 96);
		else
			write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_repeat_alpha(argv[1]);
	write(1, "\n", 1);
	return (0);
}
