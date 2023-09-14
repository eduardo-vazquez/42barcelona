#include <unistd.h>
#include "../print_bits/print_bits.c"

unsigned char swap_bits(unsigned char octet);

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		print_bits(argv[1][0]);
		write(1, "\n", 1);
		print_bits(swap_bits(argv[1][0]));
		write(1, "\n", 1);
	}
	return (0);
}
