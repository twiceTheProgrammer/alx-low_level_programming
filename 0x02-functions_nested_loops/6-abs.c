#include "main.h"

/**
 * _abs - calculates the absolute value of a number
 * @n: parameter
 * Return: 0 or 1
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * (-1));
	}
}
