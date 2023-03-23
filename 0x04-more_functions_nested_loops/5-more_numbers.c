#include "main.h"

/**
 * more_numbers - prints more numbers from 0 -14
 *
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		j = 0;
		for (j ; j <= 14; j++)
		{
			_putchar(j + '0');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
