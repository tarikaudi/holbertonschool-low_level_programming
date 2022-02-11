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

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
		for (j = i-1; j >= 0; j--)
		{
			_putchar(s[i]);
		}
	_putchar('\n');
}
