#include "main.h"

/**
 *_strlen - show absolute value
 *@s: pointer
 *Return: return lenght
*/
int _strcmp(char *s1, char *s2)
{

	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}

