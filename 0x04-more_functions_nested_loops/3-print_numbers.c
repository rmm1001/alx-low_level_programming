#include "main.h"

/**
 * print_number - prints the number zero to nine
 *
 * Return: Always 0 (Success)
 */

void print_numbers(void)
{

int i;

i = 0;

for (i =0; i < 10; i++)

_putchar(i + 'a');

_putchar('\n');
}
