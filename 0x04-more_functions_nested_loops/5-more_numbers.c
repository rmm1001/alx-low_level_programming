#include "main"
#include <stdio.h>

/**
 * main - more_numbers - prints numbers from 0 to 14 10 times
 *
 * Return: Always 0.
 */

void more_numbers(void)
{
int count, number;

for (count = 0; count < 10; count++)
{
for(number = 0; number <= 14, number++)
{
_putchar(number + '0');
}
_putchar('\n');
}
_putchar('\n');
}