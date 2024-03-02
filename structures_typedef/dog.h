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

typedef struct dog *Tdog;

/**
 * init_dog - asignar valores a un dog
 * @d: puntero a dog;
 * @name: parametro nombre;
 * @age: parametro edad;
 * @owner: parametro prpr;
 *
 * Return: void, solo carga los valores
 */

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */

