#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free dog memory
 * @d: dog struct
 *
 * Return: nothing
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
