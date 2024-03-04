#include "dog.h"
#include <stdlib.h>

/**
* free_dog - libera un perro
*@d: dog al liberar
* Return: void, solo libera
*/

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
