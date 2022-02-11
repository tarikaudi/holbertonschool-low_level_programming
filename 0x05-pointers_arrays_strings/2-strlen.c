#include "main.h"

/**
 *_strlen - show absolute value
 *@s: pointer
 *Return: return lenght
*/
int _strlen(char *s)
{
	int i = 0;
	int l = 0;

	while (s[i] != '\0')
	{
		i++;
		l++;
	}
	return (l);
}
