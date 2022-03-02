#include "main.h"
#include <stdlib.h>

/**
 *create_array - main main
 *@size: size size
 *@c: char
 *Return: 0 for
 **/
char *create_array(unsigned int size, char c)
{
	char *arre;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}

	arre = malloc(sizeof(char) * size);

	if (arre == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arre[i] = c;
	}

	return (arre);
}
