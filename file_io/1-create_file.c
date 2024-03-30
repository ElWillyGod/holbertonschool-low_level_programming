#include "main.h"

/**
*create_file - create file on text content;
*@filename: name the archive
*@text_content: text the content to file
*
*Return: retorna -1 si falla y 1 si sale todo bien
*/

int create_file(const char *filename, char *text_content)
{
	int DescOpen;

	if (filename == NULL)
		return (-1);

	DescOpen = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (DescOpen == -1)
		return (-1);

	if (text_content != NULL)
		write(DescOpen, text_content, strlen(text_content));

	close(DescOpen);

	return (1);
}
