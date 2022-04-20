#include "main.h"

/**
 * swap-int - swap the value of two integers a and b
 * @a: A pointer will be updated
 * @b: B pointer will be updated
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
