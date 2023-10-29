#include <unistd.h>

int main(int argc, char** argv)
{
	int index = 0;
	int start = 0;
	int end = 0;
	int flag = 0;

	if (argc > 1 && argv[1][0])
	{
		while (argv[1][index] == ' ' || argv[1][index] == '\t')
			index++;
		start = index;
		while (argv[1][index] != '\0' && argv[1][index] != ' ' && argv[1][index] != '\t')
			index++;
		end = index;
		while (argv[1][index] == ' ' || argv[1][index] == '\t')
			index++;
		while (argv[1][index])
		{
			while ((argv[1][index] == ' ' && argv[1][index + 1] == ' ') || (argv[1][index] == '\t' && argv[1][index + 1] == '\t'))
				index++;
			if (argv[1][index] == ' ' || argv[1][index] == '\t')
				flag = 1;
			write(1, &argv[1][index], 1);
			index++;
		}
		if (flag == 1)
			write(1, " ", 1);
		while (start < end)
		{
			write(1, &argv[1][start], 1);
			start++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
