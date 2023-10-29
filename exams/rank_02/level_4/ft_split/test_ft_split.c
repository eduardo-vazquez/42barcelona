#include <stdio.h>
#include "ft_split.c"

char* ft_strncpy(char*, char*, int);
char** ft_split(char*);


int main(int argc, char** argv)
{
	char** 	str = NULL;
	int 	index = 0;
	if (argc == 2)
	{
		str = ft_split(argv[1]);
		while (str[index] != NULL)
			printf("%s\n", str[index++]);
	}
	return (0);
}
