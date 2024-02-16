#include "main.h"
#include<ctype.c>
/**
*_islower - si es minuscula o no
*@c: int del char
*Return: 0 o 1
*/

int _islower(int c)
{
	if (islower(c))
	{
	return (1);
	}
	else
	{
	return (0);
	}

}
