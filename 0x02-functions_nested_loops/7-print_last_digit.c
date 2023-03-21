#include "main.h"

/**
 * print_last_digit - find last digit of a number
 * @n: parameter
 * Return: 0 or 1
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
		n = -n;

	last_digit = n % 10;

	if (last_digit < 0)
		last_digit = -last_digit;

	_putchar('0' + last_digit);
	return (last_digit);
}
