#include "main.h"

/**
 * _strspn - find length of prefix substring
 * @s: target string
 * @accept: param
 * Return: length
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, length = 0, flag;

	for (i = 0; s[i] != '\0'; i++)
	{
		flag = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				length++;
				flag = 1;
			}
		}

		if (flag == 0)
			return (length);
	}

	return (0);
}
