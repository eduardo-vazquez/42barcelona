#include <unistd.h>

void rstr_capitalize(char* str)
{
	 int index = 0;

	 while (str[index])
	 {
		if (str[index] >= 'A' && str[index] <= 'Z')
			str[index] += 32;
		if (str[index] >= 'a' && str[index] <= 'z' && \
				(str[index + 1] == ' ' || str[index + 1] == '\t' || str[index + 1] == '\0'))
			str[index] -= 32;
		write(1, &str[index], 1);
		index++;
	 }
}

int main(int argc, char** argv)
{
	int index = 1;
	if (argc < 2)
		return (write(1, "\n", 1));
	while (index < argc)
	{
		rstr_capitalize(argv[index]);
		write(1, "\n", 1);
		index++;
	}	
	return (0);
}
