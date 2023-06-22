#include "main.h"
/**
  * print_most_numbers - function that prints the numbers,except 2 and 4
  * Return: void
  */

void print_most_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		if (i == 2 || i == 4)
		{
			i++;
		}
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
