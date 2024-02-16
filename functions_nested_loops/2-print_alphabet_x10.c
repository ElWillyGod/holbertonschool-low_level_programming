#include "main.h"

/**
*print_alphabet_x10 - imprimir 10 veces el alphabet
*Return: ni idea
*/

void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
	char letra = 97;

	while (letra <= 122)
	{
		printf("%c", letra);
		letra++;
	}
	printf("\n");

	}
}

