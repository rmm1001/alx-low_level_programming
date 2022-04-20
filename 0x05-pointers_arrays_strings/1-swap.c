#include "main.h"

/**
 * swap_int - swap the velue of two integers a and b
 * @a: input parameter 1
 * @b: input parameter 2
 *
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
