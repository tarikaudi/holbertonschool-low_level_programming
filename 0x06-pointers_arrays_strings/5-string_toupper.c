#include "main.h"

/**
 *string_toupper - says if it is lower and returns
 *@c: pointer
 *Return: return the pointer
*/
char *string_toupper(char *c)
{
	int i = 0;

	while (c[i])
	{
		if (c[i] >= 'a' && c[i] <= 'z')
			c[i] -= 32;
		i++;
	}

	return (c);
}
