#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int main(int argc, char **argv)
{
	(void)argc;
	int file = open(argv[1], O_RDONLY);
	int i = 0;
	char *str = get_next_line(file);
	while (str)
	{
		i++;
		printf("%6i\t%s", i, str);
		free(str);
		str = get_next_line(file);
	}
	close (file);
}
