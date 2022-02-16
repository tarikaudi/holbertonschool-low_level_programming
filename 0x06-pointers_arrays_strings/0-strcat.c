#include "main.h"

/**
 *_strcat - show absolute value
 *@dest: destiny array with char
 *@src: array that will be copied
 *Return: return copy
*/
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j;

	while (dest[i] != '\0')
		i++;

		for (j = 0; src[j] != '\0'; j++, i++)
		{
		dest[i] = src[j];
		}

	return (dest);
}
