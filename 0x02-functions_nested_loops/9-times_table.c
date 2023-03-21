#include "main.h"

/**
 * times_table - print times table
 * Return: 0 or 1
 */
void times_table(void)
{
	int counter = 0;
	int multiple = 0;
	int result;

	while ((counter <= 9) && (multiple <= 9))
	{
		while (multiple <= 9)
		{
			result = counter * multiple;
			if (result == 0)
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
			multiple++;
		}
		_putchar('\n');
		counter++;
	}
}
