#include <unistd.h>
void	ft_write_number(int i)
{
	char	str[] = "0123456789";
	if (i > 9)
		ft_write_number(i / 10);
	write(1, &str[i % 10], 1);
}
int	main(void)
{
	int	i;

	i = 0;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			write(1, "fizzbuzz", 8);
		else if(i % 3 == 0)
			write(1, "fizz", 4);
		else if(i % 5 == 0)
			write(1, "buzz", 4);
		else
			ft_write_number(i);
		write(1, "\n", 1);
		i++;
	}
}
