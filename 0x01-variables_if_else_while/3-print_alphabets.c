#include<stdio.h>
/**
 * main - return alphabetics
 * in lower case then in
 * upercase
 *
 * Return: Success
 */
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	for (i = 'A'; i <= 'Z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
