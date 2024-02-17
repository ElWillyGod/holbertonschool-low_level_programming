#include "main.h"
#include <stdio.h>

/**
 *jack_bauer - imprime los minutos
 *Return: void
 */

void jack_bauer(void)
{
	int minuto,  hora;

	for (hora = 0; hora <= 23; hora++)
	{
		for (minuto = 0; minuto <= 59; minuto++)
		{
			printf("%02d:%02d\n", hora, minuto);
		}
	}
}
