#include <ctype.h>
#include "main.h"

/**
 *_isupper - es o no es mayuscula
 *@c: numero
 *Return: es o no es mayuscula
 */

int _isupper(int c)
{
	return ((isupper(c) > 0) ? 1 : 0);
}
