#include "main.h"

/**
 * *_memcpy - copies memory area from src to dst
 * @dest: destination pointer
 * @src: source pointer
 * @n: counter
 * Return: char
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index = 0;

	while (index < n)
	{
		dest[index] = src[index];
		index++;
	}

	return (dest);
}
