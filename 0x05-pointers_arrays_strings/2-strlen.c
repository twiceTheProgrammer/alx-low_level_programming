#include "main.h"

/**
* _strlen - find length of a string
* @str: param
* Return: lenght of str
*/

int _strlen(char *str)
{
	int index = 0;

	while (str[index] != '\0')
	{
		index++;
	}
	return (index);
}
