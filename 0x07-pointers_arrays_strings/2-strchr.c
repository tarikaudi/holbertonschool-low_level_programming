#include "main.h"

/**
 * _strchr - strchr locates the characters
 * @s: pointer
 * @c: variable to compare
 * Return: return the output depending on
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
