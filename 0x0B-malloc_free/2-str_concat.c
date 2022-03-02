#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to a new string that concatenate s1 and s2 or NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *string;
	unsigned int i = 0, j = 0, largo1 = 0, largo2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
		while ((s1[largo1] != '\0'))
		{
			largo1++;
		}
			while ((s2[largo2] != '\0'))
		{
			largo2++;
		}
		largo2++;

	string = malloc(sizeof(char) * (largo1 + largo2));
	if (string == NULL)
	{
		return (NULL);
	}
		if (string == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < largo1; i++)
	{
		string[i] = s1[i];
	}
	for (j = 0; j < largo2; i++, j++)
	{
		string[i] = s2[j];
	}

	return (string);
}
