#ifndef DOG_H
#define DOG_H


/**
 * struct dog - estructura de un perro
 * @name: nombre
 * @age: edad
 * @owner: prop
 *
 * Description: info de un perro
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

#endif /* DOG_H */

