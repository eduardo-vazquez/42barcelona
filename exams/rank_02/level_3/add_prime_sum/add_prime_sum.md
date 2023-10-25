### subject
```
Assignment name  : add_prime_sum
Expected files   : add_prime_sum.c
Allowed functions: write, exit
--------------------------------------------------------------------------------

Write a program that takes a positive integer as argument and displays the sum
of all prime numbers inferior or equal to it followed by a newline.

If the number of arguments is not 1, or the argument is not a positive number,
just display 0 followed by a newline.

Yes, the examples are right.

Examples:

$>./add_prime_sum 5
10
$>./add_prime_sum 7 | cat -e
17$
$>./add_prime_sum | cat -e
0$
$>
```
### code
```
#include <unistd.h>
#include <stdio.h>

int ft_atoi(char *str)
{
	int num;

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

	if (num < 0)
	{
		write(1, "-", 1);
		if (num == -2147483648)
		{
			write(1, "2", 1);
			num = -147483648;
		}
		num = num * -1;
	}
	if (num > 9)
		ft_putnbr(num / 10);
	n = num % 10 + '0';
	write(1, &n, 1);
}

int	main(int argc, char **argv)
{
	int	num;
	int i;
	char *a = "145";

	i = 0;
	num = 0;
	if (argc == 2 && ft_atoi(argv[1]) > 0)
	{
		while (i <= ft_atoi(argv[1]))
		{
			if (ft_is_prime(i))
				num += i;
			i++;
		}
		ft_putnbr(num);
	}
	else
		write(1, "0\n", 2);
	return (0);
}
```

