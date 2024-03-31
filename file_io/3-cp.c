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
 *ErrorRead - control de error al leer archivo
 *@DescFile: int que identifica al archivo
 *@file: file;
 *
 *Return: void
 */

void ErrorRead(int DescFile, char *file)
{
	if (DescFile == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		exit(98);

	}
}
/**
 *ErrorWrite - control de error de escritura
 *@DescFile: int que identifica al archivo
 *@file: file;
 *
 *Return: void
 */

void ErrorWrite(int DescFile, char *file)
{
	if (DescFile == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
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
	int FileFrom, FileTo, ByteChek;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	FileFrom = open(argv[1], O_RDONLY);
	ErrorRead(FileFrom, argv[1]);

	FileTo = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	ErrorWrite(FileTo, argv[2]);

	while ((ByteChek = read(FileFrom, buffer, 1024)) > 0)
	{
		ErrorRead(FileFrom, argv[1]);

		ByteChek = write(FileTo, buffer, ByteChek);

		ErrorWrite(ByteChek, argv[2]);
	}

	ErrorRead(ByteChek, argv[1]);

	CloseFile(FileFrom);
	CloseFile(FileTo);

	return (0);
}
