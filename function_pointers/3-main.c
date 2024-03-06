#include "3-calc.h"

/**
*main - calculadora
*@argc: cantidad de argumentos
*@argv: array de parametros
*
*Return: retona codigo de error
*/

int main(int argc, char *argv[])
{
	int (*operacion)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	operacion = get_op_func(argv[2]);

	if (!(operacion))
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", operacion(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
