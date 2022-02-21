#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: array to reverse
 * @n: number of elements of the array
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i; 

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
