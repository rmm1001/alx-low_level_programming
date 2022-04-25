#include "main.h"
/**
 * memset - fills memory with a constant byte
 * @s: pointer block of memory to fill
 * @b: value to set
 * @n: bytes of memory
 * Return: dest
 */

char *_memset(char *, char b, unsigned int n)

{
unsigned int i;

/*Delacring FOR*/
for (i = 0; i < n; i++)
{
*(s + i) = b; /*add 1 position s*/

} /*END FOR*/

return (s);
}
