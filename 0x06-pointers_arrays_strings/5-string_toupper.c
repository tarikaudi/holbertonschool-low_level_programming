#include "main.h"

/**
 *_isalpha - says if it is lower and returns
 *@c: variable that is used by is alpha
 *Return: return 1 if is lowercase 0 if it's not
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
