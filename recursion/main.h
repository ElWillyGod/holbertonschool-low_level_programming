#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <string.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c);

/**
 * _puts_recursion - mostrar un string con recursion
 * @s: string a mostrar
 *
 * Return: void, solo muestra el *char
 */

void _puts_recursion(char *s);

/**
 * _print_rev_recursion - imprimir un string en recursion al revez
 * @s: array de char a imprimir
 *
 * Return: void, solo imprime
 */

void _print_rev_recursion(char *s);

#endif /* MAIN_H*/
