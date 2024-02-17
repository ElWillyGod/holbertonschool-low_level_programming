#ifndef MAIN_H
#define MAIN_H
#include<stdio.h>

/**
* _putchar - writes the character c to stdout
* @c: The character to print
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/

int _putchar(char c);

/**
*print_alphabet - cosas
*Return: ni idea
*/

void print_alphabet(void);

/**
*print_alphabet_x10 - imprimimos el alphabet 10 veces
*Return: nada
*/

void print_alphabet_x10(void);

/**
*_islower - ver si es minuscula o no
*@c: int del char
*Return: 1 si es minuscula y 0 si no
*/

int _islower(int c);

/**
*_isalpha - mayusculas
*Return: 0 o 1 segun tu hermana es gay o no
*@c: char en el int
*/

int _isalpha(int c);

/**
*print_sign - imprime el signo
*Return: retorna el signo del numero 
*/

int print_sign(int n);

/**
*_abs - valor absoluto
*@n: int para el valor absoluto
*Return: tipo de valor
*/

int _abs(int n);

/**
*print_last_digit - valor absoluto
*@n: int para el valor absoluto
*Return: tipo de valor
*/

int print_last_digit(int n);

/**
 *jack_bauer - imprime los minutos
 *Return: vacio
 */

void jack_bauer(void);

/**
 *times_table - mostramos la tabla del 0 a 9
 *Return: nada
 */

void times_table(void);

/**
 *add - suma int's
 *@a: numero uno
 *@b: numero dos
 *Return: retornamos la suma
 */

int add(int a, int b);

/**
 * print_to_98 - imprimir numeros naturales
 * @a: int de donde termina
 * Return: void
 */

void print_to_98(int a);

#endif /* MAIN_H */
