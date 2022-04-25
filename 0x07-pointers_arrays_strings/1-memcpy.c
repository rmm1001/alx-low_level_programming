#include "main.h"

/**
 * *memcpy - copies memery area,
 * @dest: destination memory area.
 * @src: source memory area.
 * @n: bytes filled.
 * Return: Always 0
 */
char *memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);

	return (dest);
}
