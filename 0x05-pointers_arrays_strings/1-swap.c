#include <stdio.h>
#include "main.h"

/**
 * swap_int - Swap the values of two integers
 * @a: First integer argument
 * @b: Second integer argument
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
