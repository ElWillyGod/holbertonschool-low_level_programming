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

#endif /* MAIN_H */
