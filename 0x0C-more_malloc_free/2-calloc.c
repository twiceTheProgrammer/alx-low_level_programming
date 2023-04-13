#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * *_calloc - allocate mem for an array
 * @nmemb: elements
 * @size: size of each element
 *
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr != NULL)
		memset(ptr, 0, nmemb * size);

	return (ptr);
}
