#include <stdio.h>

/**
 * main - print first 50 fib sequence
 *
 * Return: 0
 */
int main(void)
{
	int next;
	int first = 1;
	int second = 2;
	int count;

	printf("%d, %d, ", first, second);
	for (count = 2; count < 50; count++)
	{
		next = first + second;
		first = second;
		second = next;
		printf("%d, ", next);
	}
	printf("\n");
	return (0);
}
