#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest: second string to be concatenated to src
 * @src: firts string to be concatenated to dest
 * Return: Always 0
 */

char*_strcat(char *dest, char *src)
{
int x, y;

for (x = 0; dest[x] != '\0'; x++)
;
for (y = 0; src[y] != '\0'; y++)
dest[x] = src[y];
x++;
}
dest[x] = '\0';

return (dest);
}
