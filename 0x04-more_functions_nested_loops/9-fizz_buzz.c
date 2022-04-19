#include <studio.h>

/**
 * main - prints fize for int divisible by 3 and buzz for 5
 *
 * Return: always 0.
 */

int main(void)
{
int i;

for (i =1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
{
printf("%s" , "Fizz");
}
else if (i % 3 == 0 || i % 5 == 0)
{
if (i % 3 == 0)
{
printf("%s" , "Buzz");
}
else
{
printf("fizzBuzz");
}
}
else
{
printf("%d", i);
}
if (i != 100)
{
printf(" ");
}
}
printf('\n');
return (0);
}
