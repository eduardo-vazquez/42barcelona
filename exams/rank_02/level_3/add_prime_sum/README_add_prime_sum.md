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

int		ft_atoi(char*);
int		ft_is_prime(int);
void	ft_putnbr(int);

int	main(int argc, char** argv)
{
	int	sum_prim_num;
	int	inf_num;

	sum_prim_num = 0;
	inf_num = 0;
	if (argc == 2 && ft_atoi(argv[1]) > 0)
	{
		while (inf_num <= ft_atoi(argv[1]))
		{
			if (ft_is_prime(inf_num))
				sum_prim_num += inf_num;
			inf_num++;
		}
		ft_putnbr(sum_prim_num);
	}
	else 
		write(1, "0", 1);
	printf("in min: %d\n", INT_MIN);
	return (write(1, "\n", 1));
}

int	ft_atoi(char* str)
{
	int	num;
	int	sign;

	num = 0;
	sign = 1;
	while(*str)
	{
		if (*str == '-')
			sign *= -1;
		else
			num = num * 10 + *str - '0';
		str++;
	}
	return (num * sign);
}

int	ft_is_prime(int num)
{
	int	inf_num;

	inf_num = 2;
	if (num <= 1)
		return (0);
	while (inf_num < num)
	{
		if (num % inf_num == 0)
			return (0);
		inf_num++;
	}
	return (1);
}

void	ft_putnbr(int nbr)
{
	char	nbr_char;

	if (nbr < 0)
	{
		write(1, "-", 1);
		if (nbr == -2147483648)
		{
			write(1, "2", 1);
			nbr = -147483648;
		}
		nbr *= -1;
	}
	if (nbr > 9)
		ft_putnbr(nbr/10);
	nbr_char = nbr % 10 + '0';
	write(1, &nbr_char, 1);
}
