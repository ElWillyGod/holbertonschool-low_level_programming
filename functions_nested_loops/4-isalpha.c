#include "main.h"
#include <ctype.h>

/**
*_isalpha - devuelve si es mayuscula o no
*@c: parametro letras
*Return: 0 o 1 segun lo que sea
*/

int _isalpha(int c)
{
	if (isalpha(c))
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
