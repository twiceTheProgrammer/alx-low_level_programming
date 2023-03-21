#include <stdio.h>

/**
 * main - print first 50 fib sequence
 *
 * Return: 0
 */
int main(void)
{
	long int next;
	long int first = 1;
	long int second = 2;
	long int count;

	for (count = 1; count <= 50; ++count)
	{
		if (count != 50)
		{
			printf("%ld, ", first);
		}
		else
	       	{
			printf("%ld\n", first);
		}

		next = first + second;
		first = second;
		second = next;
	}
	return (0);
}
