#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Print all the digits of the base 16 in lowercase
 * Return: 0
 */
int main(void)
{
char x;

for (x = '0'; x <= '9'; ++x)
putchar(x);
for (x = 'a'; x <= 'f'; ++x)
putcahr(x);

putchar('\n');

return (0);
}
