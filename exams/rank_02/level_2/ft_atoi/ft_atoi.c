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
