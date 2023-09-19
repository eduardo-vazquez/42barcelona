#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	num;

	num = 0;
	while (*str)
		num = num * 10 + *str++ - '0';
	return (num);
}

int	ft_is_prime(int num)
{
	int i;

	i = 2;
	if (num <= 1)
		return (0);
	while (i < num)
	{
		if (num % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void	ft_putnbr(int num)
{
	char n;
	if (num > 9)
		ft_putnbr( num / 10);
	n = num % 10 + '0';
	write(1, &n, 1);
}

int	main(int argc, char **argv)
{
	int	num;
	int i;

	i = 0;
	num = 0;
	if (argc == 2)
	{
		while (i <= ft_atoi(argv[1]))
		{
			if (ft_is_prime(i))
				num += i;
			i++;
		}
		ft_putnbr(num);
	}
	write(1, "0\n", 2);
	return (0);
}
