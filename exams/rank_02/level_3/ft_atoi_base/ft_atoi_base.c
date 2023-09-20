int	ft_atoi_base(const char *str, int str_base)
{
	int num;
	int i;

	num = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] >= && str[i] <= 9)
			num = str[i] - '0';
	}
	return (num)
}
