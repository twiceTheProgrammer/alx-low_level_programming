#include "main.h"

/**
 * print_times_table - print times table of n
 * @n: param
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, mult;

	if ((n >= 0) && (n <= 15))
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				mult = i * j;
				if (j == 0)
					_putchar(mult + '0');
				else if (mult < 10 && j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(mult + '0');
				}
				else if (mult >= 10 && mult < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((mult / 10) + '0');
					_putchar((mult % 10) + '0');
				}
				else if (mult >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((mult / 100) + '0');
					_putchar(((mult / 10) % 10) + '0');
					_putchar((mult % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
