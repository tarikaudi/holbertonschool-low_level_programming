#include "main.h"

/**
 *_memcpy - copies
 * @dest: first string
 * @src: second string
 * @n: variable to work with
 * Return: dest
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
