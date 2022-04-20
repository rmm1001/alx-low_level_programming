#include <stdio.h>
#include "main.h"

/**
 * swap_int - swap the velue of two integers a and b
 *
 * @a: integer
 * @b: integer
 *
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
