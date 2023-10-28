# include <unistd.h>

int 	ft_putnbr(int number)
{
	char c_number;

	if (number >= 10)
		ft_putnbr(number / 10);
	c_number = number % 10 + '0';
	return (write(1, &c_number, 1));
}

int main(int argc, char** argv)
{
	(void)argv;
	ft_putnbr(argc -1);
	return(write(1, "\n", 1));
}
