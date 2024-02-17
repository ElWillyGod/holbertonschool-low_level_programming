#include "main.h"

/**
 * _isdigit - devuede si es digito o no
 * @c: el in si es un digito
 * Return: retorna 0 o 1 si e sun numero o no
 */

int _isdigit(int c)
{
	return ((isdigit(c) > 0) ? 1 : 0);
}
