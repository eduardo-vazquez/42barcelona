### subject
```
Assignment name  : paramsum
Expected files   : paramsum.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that displays the number of arguments passed to it, followed by
a newline.

If there are no arguments, just display a 0 followed by a newline.

Example:

$>./paramsum 1 2 3 5 7 24
6
$>./paramsum 6 12 24 | cat -e
3$
$>./paramsum | cat -e
0$
$>
```
### code
```
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
```
