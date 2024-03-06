#include "3-calc.h"
/**
*op_add - sumar
*@a: numero unov
*@b: numero dos
*
*Return: retorno la suma
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
*op_sub - rertar
*@a: numero unov
*@b: numero dos
*
*Return: retorno la resta
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
*op_mul - multiplica
*@a: numero unov
*@b: numero dos
*
*Return: retorno la suma
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
*op_div - divide
*@a: numero unov
*@b: numero dos
*
*Return: retorno la div
*/
int op_div(int a, int b)
{
	if (b == 0)

	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
*op_mod - modulo
*@a: numero unov
*@b: numero dos
*
*Return: retorno la resta de la div
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
