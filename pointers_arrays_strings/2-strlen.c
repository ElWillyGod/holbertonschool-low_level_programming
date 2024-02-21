#include "main.h"

/**
 * _strlen - largo del string
 * @s: largo de char
 * Return: largo de chars
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; *s++ != '\0'; i++)
		;

	return (i);
}
