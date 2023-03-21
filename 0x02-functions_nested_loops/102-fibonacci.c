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

	printf("%ld, %ld, ", first, second);
	for (count = 2; count < 50; count++)
	{
		next = first + second;
		first = second;
		second = next;
		printf("%ld, ", next);
	}
	printf("\n");
	return (0);
}
