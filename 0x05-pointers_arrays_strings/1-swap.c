#include "main.h"

/**
* swap_int - swaps two intergers
* @a: param 1
* @b: param 2
* Return: void
*/

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
