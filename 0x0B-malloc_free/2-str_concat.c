#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - concat two strings
 * @s1: param
 * @s2: param
 * Return: pointer
 */

char *str_concat(char *str)
{
	char *result;
	unsigned int i = 0; j = 0; len1 = 0; len2 = 0;

		while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	result = malloc(sizeof(char) * (len1 + len2 + 1));
	if (result == NULL)
		return (NULL);

	i = 0;
	j = 0;

	if (s1)
	{
		while (i < len1)
		{
			result[i] = s1[i];
			i++;
		}
	}

	if (s2)
	{
		while (i < (len1 + len2))
		{
			result[i] = s2[j];
			i++;
			j++;
		}
	}
	result[i] = '\0';

	return (result);
}
