#include "main.h"

/**
 *_memset - sets the out
 * @s: pointer
 * @b: to be subst
 * @n: numbre given by
 * Return: the pointer
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
