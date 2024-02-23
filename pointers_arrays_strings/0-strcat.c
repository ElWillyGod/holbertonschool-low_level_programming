#include "main.h"

/**
 * _strcat - concatena dos string
 * @dest: primer string
 * @stc: segundo string a concatenar
 *
 * Return: la cadena concatenada
 */

char *_strcat(char *dest, char *stc)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (j = 0; stc[j] != '\0'; j++)
	{
		dest[i] = stc[j];
		i++;
	}


	return (dest);
}
