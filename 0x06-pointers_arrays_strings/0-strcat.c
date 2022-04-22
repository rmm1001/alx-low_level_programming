#include "main.h"

/**
 * _strcat - function that concatenates
 *   two strings
 *
 *   @dest: pointer to destnation input
 *   @src: pointer to source input
 *
 *   Return: pointer to resulting string @dest
 */

char *_strcat(char *dest, char *src)
{
int c, c2;
c = 0;
/*find the size of the dest array*/
while (dest[c])
c++;
/* interate through each src array value without the null bytes*/
dest[c++] = src[c2];
return (dest);
}

