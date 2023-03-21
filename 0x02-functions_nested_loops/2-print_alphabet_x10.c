#include "main.h"

/**
 * print_alphabet_x10 - print 10 rows of alphabets followed by new line
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int count = 0;
	char c;

	while (count < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			++c;
		}
		count++;
		_putchar('\n');
	}
}
