#include <stdio.h>
#include <stdlib.h>

int main(int ac, char *av[])
{
	char *buffer;
	size_t nbytes = 64;
	ssize_t bytes_read;

	(void)ac;
	(void)av;
	buffer = malloc(nbytes);
	while (1)
	{
		printf("($) ");
		bytes_read = getline(&buffer, &nbytes, stdin);
		if (bytes_read == -1)
		{
			printf("\n");
			break;
		}
		printf("%s", buffer);
	}
	return (0);
}


