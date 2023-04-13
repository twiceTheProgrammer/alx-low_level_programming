#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates array of ints
 *
 * @min: starting int
 * @max: last int
 *
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int *result, i;
	
	if (min > max)
		return (NULL);

	result = malloc((max - min + 1) * sizeof(int));

	if (result == NULL)
		return (NULL);

	for (i = 0; i <= max - min; i++)
	{
		result[i] = min + i;
	}

	return (result);
}
