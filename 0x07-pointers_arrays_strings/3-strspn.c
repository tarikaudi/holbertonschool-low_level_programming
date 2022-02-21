#include "main.h"

/**
 * _strspn - gets the lenght
 * @s: first string
 * @accept: second string
 * Return: suma
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int suma = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != ' ')
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
					suma++;
			}
		} else
			return (suma);

	}
	return (suma);
}
