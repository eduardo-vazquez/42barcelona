#include <unistd.h>

int ft_atoi(char* str)
{
	int number = 0;
	int sign = 1;

	while (*str == ' ' || (*str < '0' && *str > '9'))
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		number = number * 10 + (*str - '0');
		str++;
	}
	return (number * sign);
}

void ft_putnbr(int number)
{	
	char c_number = 0;

	if (number == -2147483648)
	{
		write(1, "-", 1);
		write(1, "2", 1);
		number = number % 1000000000 * -1;
	}
	if (number < 0)
	{
		write(1, "-", 1);
		number *= -1;
	}
	if (number > 9)
		ft_putnbr(number / 10);
	c_number = number % 10 + '0';
	write(1, &c_number, 1);
}

int main(int argc, char** argv)
{
	int multiplier = 1;
	int number = ft_atoi(argv[1]);

	if (argc == 2)
	{
		while (multiplier <= 9)
		{
			ft_putnbr(multiplier);
			write(1, " x ", 3);
			ft_putnbr(number);
			write(1, " = ", 3);
			ft_putnbr(multiplier * number);
			write(1, "\n", 1);
			multiplier++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
