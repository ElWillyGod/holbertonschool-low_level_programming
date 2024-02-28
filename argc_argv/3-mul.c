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
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", (*argv[1] - '0') * (*argv[2] - '0'));


	return (0);
}
