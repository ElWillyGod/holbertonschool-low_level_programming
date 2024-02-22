#include <stdio.h>
#include <string.h>

/**
 * _putchar - imprime un char
 * @n: char
 * Return: null
 */

int _putchar(char n);

/**
 * reset_to_98 - cambiar numero a 98
 * @n: puntero
 * Return: nada
 */

void reset_to_98(int *n);

/**
 * swap_int - intercambiamoms ints
 * @a: numero uno
 * @b: numero dos
 * Return: nada, solo imprim#includee
 */

void swap_int(int *a, int *b);

/**
 * _strlen - largo de la cadena
 * @s - cadena
 * Return: el largo de la cadena 
 */

int _strlen(char *s);

/**
 * _puts - mostrar el contenido de una cadena 
 * @str: cadena
 * Return: nada, solo imprime la cadena
 */

void _puts(char *str);

/**
 * print_rev - imprime el reverso de un char
 * @s: es el string
 * Return: solo muestra el string invertido, void
 */

void print_rev(char *s);

/**
 * rev_string - da vuelta un string
 * @s: cadena a dar vuelta
 * Return: void solo muestra 
 */

void rev_string(char *s);

/**
 * puts2 - imprime el string de a dos
 * @str: string a imprimir
 * Return; nada, solo imprime
 */

void puts2(char *str);

/**
 * puts_half - imprime la mitad de una cadena 
 * @str: el strin aque debemos mostrar
 * Retunr: void, mostramos el contenido
 */

void puts_half(char *str);

/**
 * print_array - imprimir n elementos de un array
 * @a: matriz 
 * @n: cantidad de numeros 
 * Retunr: void, imprimir n cantidad de numeros
 */

void print_array(int *a, int n);

/**
 * _strcpy - copia un string
 * @dest: copia del string
 * @src: string a copiar
 * Retunr: dest, copia del string
 */

char *_strcpy(char *dest, char *src);

/**
 * _atoi - pasaremos de string a int, segun los signos que encontremos 
 * @s: cadena de string que cambiaremos
 *
 * Return: char convert to string segun nos signos
 */

int  _atoi(char *s);
