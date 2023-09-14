int	max(int	*tab, unsigned int len)
{
	int	i;
	int	num;

	i = 1;
	num = tab[0];
	if (len > 1)
	{
		while (i < len)
		{
			if (num < tab[i])
				num = tab[i]; 
			i++;	
		}
	}
	else if (len == 0)
		return (0);
	return(num);
}
