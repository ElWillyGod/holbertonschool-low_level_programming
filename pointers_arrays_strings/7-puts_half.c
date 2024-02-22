#include "main.h"

/**
 * puts_half - imprimimos la mitad de un string
 * @str: array de char
 * Return: void, muestra la mitad del char
 */
void puts_half(char *str)
{
	int largo, mitad;

	for (largo = 0; str[largo] != '\0'; largo++)
		;

	mitad = largo / 2;

	if (largo % 2)
	{
		mitad++;
	}

	while (mitad < largo)
	{
		_putchar(str[mitad]);
		mitad++;
	}

	_putchar(10);
}
