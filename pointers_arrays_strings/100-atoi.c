#include "main.h"

/**
 * _atoi - caonvertir un array char en un int segun el numero
 * @s: array de char que vamos a convertir
 *
 * Return: int que nos manden, 0 si no pasa int
 */

int _atoi(char *s)
{

	int i;
	unsigned int numero;

	i = 1;
	numero = 0;

	while (*s != '\0' && (*s < '0' || *s > '9'))
	{
		(*s == '-') ? (i *= -1) : (i *= 1);
		s++;
	}

	if (*s == '\0')
	{
		return (numero);
	}
	else
	{
		while (*s >= '0' && *s <= '9')
		{
			numero = numero * 10 + (*s - '0');
			s++;
		}

		return (numero * i);
	}
}

			
