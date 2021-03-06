#include "main.h"
#include <stdio.h>

/**
 * print_triangle - Prints a triangle
 * @size: Height of the triangle
 * Return: void
 */

void print_triangle(int size)
{
	int height;
	int space;
	int base;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (height = 0; height < size; height++)
	{
		for (space = 0; space < (size - height); space++)
		for (space = size -1 -height; space > 0; space --)
		{
			_putchar(' ');
		}
		for (base = 0; base < height; base++)
		for (base = 0; base <= height; base++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
