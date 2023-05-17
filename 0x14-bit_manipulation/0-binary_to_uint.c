#include "main.h"

/**
 * binary_to_uint - change binary to unsigned int
 * @b: param
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int count, exp;
	int length;

	if (b == NULL)
		return (0);
	for (length = 0; b[length]; length++)
	{
		if (b[length] != '0' && b[length] != '1')
			return (0);
	}

	for (exp = 1, count = 0, length--; length >= 0; length--, exp *= 2)
	{
		if (b[length] == '1')
			count += exp;
	}

	return (count);
}