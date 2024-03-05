#ifndef FUNTION_POINTERS_H
#define FUNTION_POINTERS_H

#include <stdlib.h>

/**
 * print_name - imprime la el nombre de la funcion
 *
 * @name: nombre
 * @f: puntero a la funcion
 *
 * Return: void solo imprime
 */

void print_name(char *name, void (*f)(char *));

/**
 *array_iterator - imprime los elementos de un array
 *
 *@array: array a imprimir
 *@size: tamanio de el array
 *@action: funcion que nececitamos usar
 *
 *Return: void, no retorna nada solo imprime el contenido de la funcion
 */

void array_iterator(int *array, size_t size, void (*action)(int));

/**
 *int_index - buscar un elemento en un array
 *@array: array donde estan los elementos
 *@size: tamanio del arreglo
 *@cmp: comparar elementos
 *
 *Return: int, si no lo encuentra retorna -1
 */

int int_index(int *array, int size, int (*cmp)(int));

#endif /* FUNTION_POINTERS_H */
