#include "main.h"

/**
 * _strncpy - concatenar chars como strncpy
 * @dest: pimera parte del char
 * @src: segunda parte del string
 * @n: largo de bytes de mas
 *
 * Return: devuelve el string concatenado
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; (i < n) && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
