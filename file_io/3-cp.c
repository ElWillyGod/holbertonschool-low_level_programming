#include "main.h"
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 *CloseFile - cierra archivo
 *@DescFile: int que identifica al archivo
 *
 *Return: void
 */

void CloseFile(int DescFile)
{
	int i;

	i = close(DescFile);

	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", DescFile);
		exit(100);
	}
}

/**
*main - copia dos archivos
*@argc: The number of arguments the program
*@argv: The arguments.
*
*Return: 0 si anad
*/

int main(int argc, char *argv[])
{
	int FileFrom, FileTo, ByteRead, ByteWrite;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDIN_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	FileFrom = open(argv[1], O_RDONLY);
	ByteRead = read(FileFrom, buffer, 1024);
	FileTo = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if ((FileFrom == -1) || (ByteRead == -1))
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		ByteWrite = write(FileTo, buffer, ByteRead);
		if ((FileTo == -1) || (ByteWrite == -1))
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		ByteRead = read(FileFrom, buffer, 1024);
		FileTo = open(argv[2], O_WRONLY | O_APPEND);
	} while (ByteRead > 0);

	free(buffer);
	CloseFile(FileFrom);
	CloseFile(FileTo);

	return (0);
}

