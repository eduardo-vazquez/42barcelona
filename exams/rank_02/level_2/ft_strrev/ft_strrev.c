char	*ft_strrev(char *str)
{
	int	len;
	int i;
	char tmp;

	i = 0;
	len = 0;
	while (str[len])
		len++;
	while (len - i > 0)
	{
		tmp = str[i];
		str[i] = str[len - 1];
		str[len - 1] = tmp;
		i++;

		len--;
	}
	return (str);
}
