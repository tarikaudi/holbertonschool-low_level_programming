#include "main.h"
#include <stdlib.h>

/**
 *_strdup - main main
 *@str: size size
 *Return: 0 for
 **/
char *_strdup(char *str)
{
	char *string;
	unsigned int i = 0;
	unsigned int largo = 0;

	if (str == NULL)
	{
		return (NULL);
	}

		while ((str[largo] != '\0'))
		{
			largo++;
		}
		largo++;

			string = malloc(sizeof(char) * largo);

		if (string == NULL)
		{
			return (NULL);
		}

	for (i = 0; i < largo; i++)
	{
		string[i] = str[i];
	}
	return (string);


}
