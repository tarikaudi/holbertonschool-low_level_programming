#include "main.h"

/**
 *puts_half - prits one character and jumps
 *@str: string should
 *Return: return absolute value
*/
void puts_half(char *str)
{
	int i = 0;
	int j = 0;
	int d = 0;

	while (str[i] != '\0')
	{
		i++;
	}

		if (i % 2 == 0)
			d = i / 2;
		else
			d = (i + 1) / 2;

		for(j = d; j < i; j++)
		{
			_putchar(str[j]);
		}
	_putchar('\n');
}
