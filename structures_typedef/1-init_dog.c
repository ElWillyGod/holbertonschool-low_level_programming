#include "dog.h"

/**
 * init_dog - asignar valores a un dog
 * @d: puntero a dog;
 * @name: parametro nombre;
 * @age: parametro edad;
 * @owner: parametro prpr;
 *
 * Return: void, solo carga los valores
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

