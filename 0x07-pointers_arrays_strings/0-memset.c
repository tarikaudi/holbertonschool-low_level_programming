#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: array to reverse
 * @n: number of elements of the array
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
