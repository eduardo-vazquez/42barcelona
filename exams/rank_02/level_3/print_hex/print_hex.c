#include <unistd.h>

int ft_atoi(char* str)
{
	int number;
	
	number = 0;
	while (*str)
	{
		number *= 10;
		number = number + (*str - '0');
		str++;
	}

	return(number);
}

void print_hex(int number)
{
	char hex_digits[] = "0123456789abcdef";

	if (number >= 16)
		print_hex(number / 16);
	write(1, &hex_digits[number % 16], 1);
}

int main(int argc, char** argv)
{
	if (argc == 2)
		print_hex(ft_atoi(argv[1]));
	write(1, "\n", 1);
	return (0);
}
