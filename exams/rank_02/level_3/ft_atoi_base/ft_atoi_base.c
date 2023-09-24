int	ft_atoi_base(const char *str, int str_base)
{
	int		result;
	int 	sign;
	int		valid_input;
	int		digit;

	result = 0;
	sign = 1;
	valid_input = 1;

	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	
	while (*str && valid_input)
	{
		if (*str >= '0' && *str <= '9')
			digit = *str - '0';
		else if (*str >= 'a' && *str <= 'z')
			digit = *str - 'a' + 10;
		else if (*str >= 'A' && *str <= 'Z')
			digit = *str - 'A' + 10;
		else
			valid_input = 0;
		if (digit >= str_base)
			valid_input = 0;
		else
			result = result * str_base + digit;
		str++;
	}
	if (valid_input == 0)
		return (0);
	return (result * sign);
}
