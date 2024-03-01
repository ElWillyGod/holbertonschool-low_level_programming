#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>

/**
 * create_array - crea una matriz y la inicializa con un caracter espesifico
 * @size: caracter
 * @c: matriz a crear;
 *
 * Return: devuelve una matriz inicializada con el caracter
 */

char *create_array(unsigned int size, char c);

/**
 * _strdup - devolver un puntero a una copia de un array char
 * @str: char a copiar
 *
 * Return: retorna el puntero a la copia 
 */

char *_strdup(char *str);

/**
 * str_concat - unir dos char y devolver el puntero
 * @s1: primera cadena
 * @s2: segunda cadena
 *
 * Return: retorna el puntero de la cadena unida
 */

char *str_concat(char *s1, char *s2);

/**
 * alloc_grid - crear un array bidimensional
 * @width: ancho
 * @height: alto
 *
 * Return: puntero a la primera pos
 */

int **alloc_grid(int width, int height);

#endif /* MAIN_H */
