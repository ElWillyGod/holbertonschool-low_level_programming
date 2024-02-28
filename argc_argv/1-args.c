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
	(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}
