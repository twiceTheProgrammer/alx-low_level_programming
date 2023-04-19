#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - execute func for each element of array
 * @array: param
 * @size: size of array
 * @action: param
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
