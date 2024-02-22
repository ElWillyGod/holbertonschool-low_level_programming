#include "main.h"

/**
 * _strcpy - copia un array de char
 * @dest: string a copiar
 * @src: copia del string dest
 *
 * Return: copia del string dest
 */

char  *_strcpy(char *dest, char *src)
{
	char *copy = dest;

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}

	*dest = '\0';

	return (copy);
}

