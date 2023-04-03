#include "main.h"
#include <stdio.h>

/**
 * *_strchr - locate char in a given string
 * @s: string pointer
 * @c: char to search
 * Return: char
 */

char *_strchr(char *s, char c)
{
	int _char;

	while (1)
	{
		_char = *s++;

		if (_char == c)
			return (s - 1);
		if (_char == 0)
			return NULL;
	}
}
