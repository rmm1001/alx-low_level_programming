#include "main"

/**
 * print_most_numbers - prints exept 2 and 4.
 *
 * Return: Always 0 (Success)
 */

void print_most_numbers(coid)
{
	int i;

	i = 0;

	for (i = 0; i < 10; i++)
	{
		if ( i == 2|| i == 4)
			
			i++;

		_putchar(i + '0');
	}
	_putcahr ('\n');

}
