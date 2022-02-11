#include "main.h"

/**
 *print_rev - show absolute value
 *@s: pointer char
 *Return: return absolute value
*/
void print_rev(char *s)
{
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
		for (j = i - 1; j >= 0; j--)
		{
			_putchar(s[j]);
		}
	_putchar('\n');
}
