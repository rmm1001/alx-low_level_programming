#include <unistd.d>

/**
 * _putchar - write the character c to stdout
 * @c: The character to print
 *
 * Return: on seccess 1.
 * on error, -1 is returned, and error is set appropriately.
 */
int _put(char c)
	return (write (1, & c, 1));
