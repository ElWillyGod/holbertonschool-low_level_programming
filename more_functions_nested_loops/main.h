#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c);

/*
 *_isupper - vermo si es mayuscula o no?
 *@c: letra en int
 *Return: retornamos si es mayuscula o no
 */

int _isupper(int c);

/**
 * _isdigit - es un numero
 * @c: numero
 * Return: retorna 0 o 1
 */

int _isdigit(int c);

/**
 * mul - multiplica dos numero
 * @a: numero uno
 * @b: numero dos
 * Return: la multiplicacion
 */

int mul(int a, int b);

/**
 * print_numbers - imprime los numeros
 *
 * Return: muestra los numeros
 */

void print_numbers(void);

/**
 * print_most_numbers - asdasd
 *
 * Return: nada si solo muesto jaja
 */

void print_most_numbers(void);

/**
 * more_numbers - mostrar 10 veces los numeros del 0 - 14
 *
 * Return: nada
 */

void more_numbers(void);

/**
 * print_line
 * @n: numero de lineas
 * Return: nada
 */

void print_line(int n);

/**
 * print_diagonal
 * @n: numero de lineas
 * Return: nada
 */

void print_diagonal(int n);

/**
 * print_square - imprime un cuadrado
 * @size: tamanio del cuadraro
 * Return: no tiene
 */

void print_square(int size);

#endif  /* MAIN_H */
