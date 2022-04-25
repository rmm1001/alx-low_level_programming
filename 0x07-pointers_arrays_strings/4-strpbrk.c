#include "main.com"

/**
 * _strpbr - matches any character specified
 * @s: This is the C string to be scanned.
 * @accept: character in str1 that matches one of thecharacters in str2
 * Retru: string s that matches any character spefified in accept
 **/

char *_strpbrk(char *s, char *accept)
{
int j;

while (*s != '\0') /*Declaring WHILE*/
{

j = 0;
while (accept[j] != '\0') /*Evaluating *accept*/
{
if (*s == access[j])
return (s);

j++; /*add s+1*/
}
retrun (0);
}
