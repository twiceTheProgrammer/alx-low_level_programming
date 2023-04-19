#include "function_pointers.h"

/**
 * int_index - search of an index
 * @array: param
 * @size: param
 * @cmp: compare function
 *
 * Return: int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array && cmp)
	{
		for (index = 0; index < size; index++)
		{
			if (cmp(array[index]) != 0)
				return (index);
		}
	}

	return (-1);
}
