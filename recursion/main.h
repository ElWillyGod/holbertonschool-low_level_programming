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

/**
 * _strlen_recursion - largo del string
 * @s: char a contar
 *
 * Return: int, largo del string
 */

int _strlen_recursion(char *s);

/**
 * factorial - factorial del numero
 * @n: numero a factorizar
 *
 * Return: retorna el int de la factoizacion
 */

int factorial(int n);

/**
 * _pow_recursion - elevar un numero al cuadrado
 * @x: numero a elevar
 * @y: exponente
 *
 * Return: numero luego de ser elevado
 */

int _pow_recursion(int x, int y);

/**
 * _sqrt_recursion - raiz cuadrada de un numero
 * @n: nuero a sacar raiz
 *
 * Return: retirna el int que de su raiz cuadrada, -1 si no es entero
 */

int _sqrt_recursion(int n);

/**
 * is_prime_number - imprime 1 si el numero es primo y 0 si no
 * @n: numero a evaluar
 *
 * Return: retorna 1 si es primo y 0 si no
 */

int is_prime_number(int n);

#endif /* MAIN_H*/
