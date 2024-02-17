#include "main.h"

/**
*print_last_digit - asdsa
*@n: asdsa
*Return: sada
*/

int print_last_digit(int n)
{
	int c = n % 10;

	if (c < 0)
	{
		c = c * -1;
	}

	_putchar(c + '0');

	return (c);
}
