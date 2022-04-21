#include "main.h"
/**
 * swap_int - swap the values of two integers
 * using two input parameters
 *
 * @a: input parameter a
 * @b: input parameter b
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
