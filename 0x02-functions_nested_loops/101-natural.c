#include <stdio.h>

/**
 * main - print the sum of natural numbers
 *
 * Return: 0
 */
int main(void)
{

	unsigned long int sum = 0;
	int count = 0;

	while (count < 1024)
	{
		if (count % 3 == 0) 
			sum += count;
		else if (count % 5 == 0)
			sum += count;
		count++;
	}
	printf("%lu\n", sum);
	return (0);
}
