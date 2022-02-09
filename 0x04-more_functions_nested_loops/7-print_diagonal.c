#include "main.h"

/**
 *_abs - show absolute value
 *@i: variable that is used
 *Return: return absolute value
*/
void print_diagonal(int n)
{
	int i;
	int j;

	if (n >= 1)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');
			_putchar('\\');
			if (i == n - 1)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
