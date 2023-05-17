#include "main.h"

/**
 * print_binary - print binary
 * @n: parameter
 */

void print_binary(unsigned long int n)
{
	unsigned long int num;
	int shft;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (num = n, shft = 0; (num >>= 1) > 0; shft++)
		;

	for (; shft >= 0; shft--)
	{
		if ((n >> shft) & 1)
			printf("1");
		else
			printf("0");
	}
}