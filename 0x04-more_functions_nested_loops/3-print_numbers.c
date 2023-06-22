#include "main.h"
/**
  * print_numbers - function that prints the numbers, from 0 to 9
  * Return: void
  */

void print_numbers(void)
{
	int i, result;

	for (i=0; i < 10; i++)
	{
		result = i + 48;
		_putchar(result);
	}
	_putchar('\n');
}
