#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print natural numbers from n to 98
 * @n: param
 * Return: void
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (int i = n; i <= 98; i++)
		{
			printf("%d, ", i);
		}
		_putchar('\n');
	}
	else if (n >= 98)
	{
		for (int i = n; i >= 98; i--)
		{
			printf("%d, ", i);
		}
		_putchar('\n');
	}
}
