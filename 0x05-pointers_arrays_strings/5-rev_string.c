#include "main.h"
/**
 *  _strlen -  calculates the length of a string.
 * @s: pointer to a string.
 * Return: lenght.
 */

int _strlen(char *s)
{
	int lenght = 0;

	while (*s != '\0')
	{
		lenght++;
		s++;
	}
	return (lenght);
}

/**
 *  rev_string - it reverse a string.
 * @s: string parameter.
 * Return: Always 0.
 */

void rev_string(char *s)
{
	int i;
	int j = _strlen(s) - 1;

	for (i = 0; i < j; i++)
	{
		char temp = s[i];

		s[i] = s[j];
		s[j] = temp;

		j--;
	}
}
