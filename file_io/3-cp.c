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
	if (close(DescFile) == -1)
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
	int fd, fd2, filecheck;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	while ((filecheck = read(fd, buffer, 1024)) > 0)
	{
		if (filecheck == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		filecheck = write(fd2, buffer, filecheck);
		if (filecheck == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (filecheck == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	CloseFile(fd);
	CloseFile(fd2);

	return (0);
}
