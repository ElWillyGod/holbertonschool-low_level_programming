#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenar sunos strings
 * @s1: string 1
 * @s2: string
 * @n: cantidad de bytes
 *
 * Return: el char concatenado
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *conc;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i]; i++)
		;

	for (j = 0; s2[j]; j++)
		;

	n > j ? n = j : n;

	conc = malloc(sizeof(char) * (i + (n + 1)));

	for (j = 0; j < i; j++)
	{
		conc[j] = s1[j];
	}

	for (i = 0; i < n; i++)
	{
		conc[j] = s2[i];
		j++;
	}
	conc[j] = '\0';
	return (conc);
}
