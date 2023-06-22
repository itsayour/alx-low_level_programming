#include "main.h"
void print_diagonal(int n)
{
	int i, j = 1;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			for(j = j - i; j < i; j++)
			{
				if (j > 0)
				{
				_putchar(' ');
				}
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
