#include "main.h"

/**
 * _strncat - retorna las cadenas concatenadas sin usar mas de n bytes de src
 * @dest: primera cadena
 * @src: segunda cadena
 * @n: bytes a usar mas de src
 *
 * Return: retornamos la cadena concatenada en dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;

	j = 0;

	while ((j < n) && (src[j] != '\0'))
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	if (j < n)
	{
		dest[i] = '\0';
	}

	return (dest);
}
