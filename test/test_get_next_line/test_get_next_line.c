#include "../../get_next_line/get_next_line.h"

int	main(void)
{
	int	fd;
//	fd = open("texto_de_prueba.txt", O_RDONLY);
	
//ubicacion de archivos en 42
//	fd = open("/Users/evazquez/francinette/tests/get_next_line/gnlTester/files/nl", O_RDONLY);
	fd = open("/Users/evazquez/francinette/tests/get_next_line/fsoares/read_error.txt", O_RDONLY);

//ubicacion de archivos en mi laptop
//	fd = open("/Users/eduardovazquez/francinette/tests/get_next_line/fsoares/read_error.txt", O_RDONLY);
//	fd = open("/Users/eduardovazquez/francinette/tests/get_next_line/fsoares/multiple_nl.txt", O_RDONLY);
//	fd = open("/Users/eduardovazquez/francinette/tests/get_next_line/fsoares/multiple_nl.txt", O_RDONLY);
//	fd = open("/Users/eduardovazquez/francinette/tests/get_next_line/fsoares/multiple_nl.txt", O_RDONLY);
//	fd = open("/Users/eduardovazquez/francinette/tests/get_next_line/gnlTester/files/41_with_nl", O_RDONLY);
//	fd = open("/Users/eduardovazquez/francinette/tests/get_next_line/fsoares/multiple_nl.txt", O_RDONLY);
//	fd = open("texto_de_prueba.txt", O_RDONLY);
	if (fd == -1)
	{
		printf("ERROR DE ARCHIVO");
		return 0;
	}
	get_next_line(fd);
	get_next_line(fd);
	get_next_line(fd);
	get_next_line(fd);
	get_next_line(fd);
	get_next_line(fd);
	get_next_line(fd);
	get_next_line(fd);
	get_next_line(fd);
	return 0;
}
