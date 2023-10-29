char* ft_itoa(int nbr)
{
	int 	num = nbr;
	int 	len = 0;
	char* 	num_str;

	if (nbr == -2147483648)
		return ("-2147483648\0");
	if (nbr < 0)
		len++;
	while (num)
	{
		num = num / 10;
		len++;
	}
	num_str = (char*)malloc(len * sizeof(char));
	if (!num_str)
		return (NULL);
	if (nbr == 0)
		return ("0\0");
	if (nbr < 0)
	{
		num_str[0] = '-';
		nbr = nbr * -1;
	}
	while (nbr)
	{
		num_str[--len] = nbr % 10 + '0';
		nbr = nbr / 10;
	}
	return (num_str);
}
