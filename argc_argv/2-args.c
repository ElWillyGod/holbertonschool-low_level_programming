#include <stdio.h>

/**
 * main - mostrar el nomber del programa
 * @argc: largo
 * @argv: array con los datos
 *
 * Return: mensaje de error
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
