#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: void.
 * On error, -1 is returned, and errno is set appropriately.
 */
void _putchar(char c)
{
	write(1, &c, 1);
}
