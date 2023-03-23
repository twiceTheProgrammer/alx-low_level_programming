#include "main.h"

/**
 * _isupper - checs for uppercase character
 * @c: param
 * Return: int
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
