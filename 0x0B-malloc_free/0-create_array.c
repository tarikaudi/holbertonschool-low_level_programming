#include "main.h"
#include <stdlib.h>

/**
 *main - main main
 *@argc: arguments
 *@argv: strings of pointers
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

	for (i = 0; i < size; i++)
	{
		arre[i] = c;
	}
	
	return (arre);
}
