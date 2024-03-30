#include "main.h"

/**
*append_text_to_file - create the archivo and add test at the end file
*@filename: name to the file
*@text_content: text;
*
*Return: retorna 1 si anda bien, si falla retorna -1;
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int DescOpen;

	if (filename == NULL)
		return (-1);

	DescOpen = open(filename, O_WRONLY | O_APPEND);

	if (DescOpen == -1)
		return (-1);

	if (text_content != NULL)
		write(DescOpen, text_content, strlen(text_content));

	close(DescOpen);

	return (1);
}
