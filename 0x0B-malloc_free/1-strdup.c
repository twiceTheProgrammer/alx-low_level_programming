#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - return a pointer to newly allocated space in mem
 * @str: string pointer
 *
 * Return: pointer
 */

char *_strdup(char *str)
{
	char *duplicate;
	unsigned int i = 0, length = 0;

	if (str == NULL)
		return (NULL);

	while (str[length])
		length++;

	duplicate = malloc(sizeof(char) * (length + 1));

	if (duplicate == NULL)
		return (NULL);

	while ((duplicate[i] = str[i]) != '\0')
		i++;

	return (duplicate);
}

