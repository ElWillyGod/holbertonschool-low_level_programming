#include "main.h"
#include <string.h>
/**
*print_sign - imprime el signo
*@n: no se bien
*Return: cosas
*/

int print_sign(int n)
{
	if (n > 0)
	{
		printf("+");
		return (1);
	}
	else
	{
		if (n < 0)
		{
			printf("-");
			return (-1);
		}
		else
		{
			printf("0");
			return (0);
		}
	}
}
