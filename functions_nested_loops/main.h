#include <stdio.h>

#ifndef MAIN_H
#define MAIN_H

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

#endif /* MAIN_H */
