#include "main.h"

/**
 * _strpbrk - prints depending of accept
 * @s: first string
 * @accept: second string
 * Return: return the pointer s
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
	i++;
	s++;
	}
	return ('\0');
}
