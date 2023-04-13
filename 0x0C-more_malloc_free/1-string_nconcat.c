#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *string_nconcat - concat two strings
 * @s1: first param
 * @s2: second param
 * @n: third param
 *
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int i = 0, j = 0, s1_len = 0, s2_len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	s1_len = strlen(s1);
	s2_len = strlen(s2);

	if (n >= s2_len)
		n = s2_len;

	result = (char *)malloc(s1_len + n + 1);

	if (result == NULL)
		return (NULL);

	for (i = 0; i < s1_len; i++)
	{
		result[i] = s1[i];
	}

	for (j = 0; j < n; j++, i++)
	{
		result[i] = s2[j];
	}

	result[i] = '\0';

	return (result);
}
