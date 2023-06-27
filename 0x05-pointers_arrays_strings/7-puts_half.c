#include "main.h"
#include "main.h"
/**
 *  _strlen -  calculates the length of a string.
 * @str: pointer to a string.
 * Return: lenght.
 */

int _strlen(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}

/**
  * puts_half - prints half of a string
  * @str: string
  *
  * Return: void
  */

void puts_half(char *str)
{
	int i = _strlen(str);
	int n = i / 2;

	for (n ; n < i; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
