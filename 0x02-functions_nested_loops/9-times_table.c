#include "main.h"

/**
 * times_table - print times table
 * Return: 0 or 1
 */
void times_table(void)
{
	int counter;
	int multiple;
	int result;

	for (counter = 0; counter < 10; counter++)
	{
		for (multiple = 0; multiple < 10; multiple++)
		{
			result = counter * multiple;
			if (multiple == 0)
				_putchar(result + '0');
			if (result < 10 && multiple != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(result + '0');
			}
			else if (result >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
