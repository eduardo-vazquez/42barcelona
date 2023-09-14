#include <stdio.h>

int	is_power_of_2(unsigned int n);
int ft_atoi(const char *str);

int	main(int argc, char **argv)
{
	int n;

	if (argc == 2)
	{
		n = ft_atoi(argv[1]);
		printf("resultado:  %d \n", is_power_of_2(n));
	}
	return (0);
}

int	ft_atoi(const char *str)
{
	int	num;
	int	sign;
	int i;

	sign = 1;
	i = 0;
	num = 0;
	while (str[i] == ' ' || str[i] == '\r' || str[i] == '\t' \
			|| str[i] == '\n' || str[i] == '\v' || str[i] == '\f')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
		num = num * 10 + str[i++] - '0';
	return (num * sign);
}
