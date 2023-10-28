### subject
```
Assignment name  : tab_mult
Expected files   : tab_mult.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that displays a number's multiplication table.

The parameter will always be a strictly positive number that fits in an int,
and said number times 9 will also fit in an int.

If there are no parameters, the program displays \n.

Examples:

$>./tab_mult 9
1 x 9 = 9
2 x 9 = 18
3 x 9 = 27
4 x 9 = 36
5 x 9 = 45
6 x 9 = 54
7 x 9 = 63
8 x 9 = 72
9 x 9 = 81
$>./tab_mult 19
1 x 19 = 19
2 x 19 = 38
3 x 19 = 57
4 x 19 = 76
5 x 19 = 95
6 x 19 = 114
7 x 19 = 133
8 x 19 = 152
9 x 19 = 171
$>
$>./tab_mult | cat -e
$
$>
```
### code
```
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
```

