#include "main.h"
#include <ctype.h>

/**
 * _islower - checks if character is lower & return 1 (true) or 0 (false)
 * @ch: Parameter to be checked
 * Return: 1 (true) or 0 (false)
 */
int _islower(int ch)
{
	if (ch <= 'z' && ch >= 'a')
	{
		return (1);
	}
	return (0);
}
