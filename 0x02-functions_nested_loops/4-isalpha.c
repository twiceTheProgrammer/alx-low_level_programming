#include "main.h"

/**
 * _isalpha - checks if input is an alphabet
 * @ch: parameter to be checked
 * Return: 1 if successful or 0 no success
 */
int _isalpha(int ch)
{
	if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
	{
		return (1);
	}
	return (0);
}
