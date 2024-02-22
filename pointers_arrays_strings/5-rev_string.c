#include "main.h"

/**
 * rev_string - da vuelta el string y lo imprime
 * @s: el string que da vuelta
 * Return: muestra solamente el string dado vuelta
 */

void rev_string(char *s)
{
	char c;
	int largo, cursor;

	largo = 0;

	for (; s[largo] != '\0'; largo++)
		;

	largo--;

	for (cursor = 0; cursor <= largo / 2; cursor++)
	{
		c = s[cursor];/*primera pos*/
		s[cursor] = s[largo - cursor];
		s[largo - cursor] = c;
	}
}






