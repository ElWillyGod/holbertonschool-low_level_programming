#include "main.h"
#include <stdio.h>

/**
*read_textfile - read file;
*@filename: file to read;
*@letters: size of file;
*
*Return: letters read;
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t ValRead, DescOpen;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	DescOpen = open(filename, O_RDONLY);
	ValRead = read(DescOpen, buffer, letters);

	if (DescOpen == -1 || ValRead == -1)
	{
		free(buffer);
		return (0);
	}

	write(STDOUT_FILENO, buffer, ValRead);

	free(buffer);
	close(DescOpen);

	return (ValRead);
}
