#include <stdio.h>

/**
 * main - print first 50 fib sequence
 *
 * Return: 0
 */
int main(void)
{
	int next = 0;
	int first = 1;
	int second = 2;
	int count;

	for (count = 0; count < 50; count++)
	{
		if (count == 1)
			next = count;
		else
		{
			next = first + second;
			first = second;
			second = next;
		}
		printf("%d, ", next);
	}
	printf("\n");
	return (0);
}
