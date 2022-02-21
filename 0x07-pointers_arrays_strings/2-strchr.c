#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: array to reverse
 * @n: number of elements of the array
 */
char *_strchr(char *s, char c)
{

	while (*s)
	{
		if (*s != c)
			s++;
		else 
			return (s);
	}
	if (c == '\0')
		return (s);
	return ('\0');
}
