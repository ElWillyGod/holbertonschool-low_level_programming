#ifndef MAIN_H
#define MAIN_H

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

#endif /* MAIN_H */
