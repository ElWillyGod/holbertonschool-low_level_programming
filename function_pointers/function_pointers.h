#ifndef FUNTION_POINTERS_H
#define FUNTION_POINTERS_H

/**
 * print_name - imprime la el nombre de la funcion
 *
 * @name: nombre
 * @f: puntero a la funcion
 *
 * Return: void solo imprime
 */

void print_name(char *name, void (*f)(char *));

#endif /* FUNTION_POINTERS_H */
