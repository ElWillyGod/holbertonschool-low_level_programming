#include <stdio.h>
#include <stdlib.h>

/**
 * main - mostrar el nomber del programa
 * @argc: largo
 * @argv: array con los datos
 *
 * Return: mensaje de error
 */

int main(int argc, char *argv[])
{
	int i, j, suma;

	suma = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if ((argv[i][j] < '0') || (argv[i][j] > '9'))
			{
				printf("Error\n");
				return (1);
			}
		}

		suma += atoi(argv[i]);
	}

	printf("%d\n", suma);

	return (0);

}
