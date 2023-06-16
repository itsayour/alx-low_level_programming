#include<stdio.h>
/**
 * main - return alphabetics
 * in lower case
 *
 * Return: Success
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
