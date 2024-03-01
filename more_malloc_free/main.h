#ifndef MAIN_H
#define MAIN_H

/**
 * malloc_checked - asigna memoria con el malloc_checked
 * @b: cantidad de memoria
 *
 * Return: void, solo asigna memoria
 */

void *malloc_checked(unsigned int b);

/**
 * string_nconcat - concatenar sunos strings
 * @s1: string 1
 * @s2: string
 * @n: cantidad de bytes
 *
 * Return: el char concatenado
 */

char *string_nconcat(char *s1, char *s2, unsigned int n);

/**
 * _calloc - asignar la memoria de un matriz con malloc
 *@nmemb: la matriz
 *@size: el tamanio
 */

void *_calloc(unsigned int nmemb, unsigned int size);

#endif /* MAIN_H */
