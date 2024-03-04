#include "dog.h"
#include <stdlib.h>

/**
 *copiar - copia un string
 *@c1: donde debe quedar la copia
 *@c2: char a copiar
 *
 *Return: char con la copia
 */

char *copiar(char *c1, char *c2)
{

	while (*c2)
	{
		*c1 = *c2;
		c2++;
		c1++;
	}

	*c1 = '\0';

	return (c1);
}

/**
* new_dog - nuevo perro
*@name: nombre
*@age: edad
*@owner: duenio
*Return: nuevo perro
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nuevo;
	int i, j;

	if (name == NULL || owner == NULL)
		return (NULL);

	nuevo = malloc(sizeof(dog_t));

	if (nuevo == NULL)
		return  (NULL);

	for (i = 0; name[i]; i++)
		;

	for (j = 0; owner[j]; j++)
		;

	nuevo->name = malloc(sizeof(char) * (i + 1));

	if (nuevo->name == NULL)
	{
		free(nuevo);
		return (NULL);
	}

	nuevo->owner = malloc(sizeof(char) * (j + 1));

	if (nuevo->owner == NULL)
	{
		free(nuevo->name);
		free(nuevo);
		return (NULL);
	}

	nuevo->name = copiar(nuevo->name, name);
	nuevo->owner = copiar(nuevo->owner, owner);
	nuevo->age = age;

	return (nuevo);
}
