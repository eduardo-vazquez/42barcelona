##subject
```
Assignment name  : union
Expected files   : union.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes two strings and displays, without doubles, the
characters that appear in either one of the strings.

The display will be in the order characters appear in the command line, and
will be followed by a \n.

If the number of arguments is not 2, the program displays \n.

Example:

$>./union zpadinton "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
zpadintoqefwjy$
$>./union ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6vewg4thras$
$>./union "rien" "cette phrase ne cache rien" | cat -e
rienct phas$
$>./union | cat -e
$
$>
$>./union "rien" | cat -e
$
$>
```
### code
```
#include <unistd.h>

int	ft_check_previous(char *str, int i, char c)
{
	i--;
	while (i >= 0)
	{
		if (str[i] == c)
			return (1);
		else 
			i--;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	i;
	int j;

	j = 0;
	i = 0;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			if (!ft_check_previous(argv[1], i, argv[1][i]))
				write(1, &argv[1][i++], 1);
			else
				i++;
		}
		while (argv[2][j])
		{
			if (!ft_check_previous(argv[1], i, argv[2][j]) && !ft_check_previous(argv[2], j, argv[2][j]))
				write(1, &argv[2][j++], 1);
			else
				j++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
```
