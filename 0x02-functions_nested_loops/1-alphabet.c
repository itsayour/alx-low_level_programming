#include "main.h"

/**
 * print_alphabet - prints the alphabet
 * in lowercase followed by new line
 * Return: alphabets
 */

void print_alphabet(void)
{
	int i = 97;

	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return;
}
