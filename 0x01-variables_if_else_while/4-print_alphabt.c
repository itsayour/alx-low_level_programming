#include<stdio.h>
/**
 * main - return alphabetics
 * in lower case except q and e
 *
 * Return: Success
 */
int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		if (i != 'e' && i != 'q')
		{
			putchar(i);
		}
		i++;
	}
	putchar('\n');
	return (0);
}
