#include "main.h"

/**
 * *_memset - fills memory with a constant byte.
 * @s: string param
 * @b: char param
 * @n: int/ counter
 * Return: char result
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index = 0;

	while (index < n)
	{
		s[index] = b;
		index++;
	}

	return (s);
}
