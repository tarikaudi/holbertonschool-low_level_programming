#include "main.h"

/**
 *_puts - print the string
 *@str: pointer of a string
 *Return: return absolute value
*/
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

