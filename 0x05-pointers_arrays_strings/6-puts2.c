#include "main.h"

/**
 *puts2 - prits one character and jumps
 *@str: string should
 *Return: return absolute value
*/
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
			i++;
	}
}
