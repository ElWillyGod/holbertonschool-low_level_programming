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
	int FileFrom, FileTo, ByteRead;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDIN_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	FileFrom = open(argv[1], O_RDONLY);

	if ((!argv[1]) || (FileFrom == -1))
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	FileTo = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	while ((ByteRead = read(FileFrom, buffer, 1024)) > 0)
	{
		if ((write(FileTo, buffer, ByteRead) != ByteRead) || FileTo == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}

	if (ByteRead == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[2]);
		exit(98);
	}

	CloseFile(FileFrom);
	CloseFile(FileTo);

	return (0);
}

