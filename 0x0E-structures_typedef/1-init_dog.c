#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - init var of type struct dog
 * @d: param
 * @name: param
 * @age: param
 * @owner: param
 *
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
