#include <unistd.h>

int main(int argc, char** argv)
{
	int start = 0;
	int end = 0;
	int index = 0;
	int flag = 0;
	
	if (argc == 2)
	{
		while (argv[1][index])
			index++;
		while (index >= 0)
		{
			while (argv[1][index] == '\0' || argv[1][index] == ' ' || argv[1][index] == '\t')
				index--;
			end = index;
			while (argv[1][index] && argv[1][index] != ' ' && argv[1][index] != '\t')
				index--;
			start = index + 1;
			flag = start;
			while (start <= end)
			{
				write(1, &argv[1][start], 1);
				start++;
			}
			if (flag != 0)
				write(1, " ", 1);
		}
	}
	write(1, "\n", 1);
	return (0);
}
