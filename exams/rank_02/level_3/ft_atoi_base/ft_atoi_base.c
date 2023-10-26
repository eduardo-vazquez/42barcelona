int ft_atoi_base(const char* str, int str_base)
{
	int number;
	int sign;
	int tmp_num;

	number = 0;
	sign = 1;
	tmp_num = 0;

	while (*str == '-')
	{
		sign = -1;
		str++;
	}
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
			tmp_num = *str - '0';
		else if (*str >= 'a' && *str <= 'z')
			tmp_num = *str - 'a' + 10;
		else if (*str >= 'A' && *str <= 'Z')
			tmp_num = *str - 'A' + 10;
		else
			return (0);
		if (tmp_num >= str_base)
			return (0);
		else
			number = number * str_base + tmp_num;
		str++;
	}
	return (number * sign);
}
