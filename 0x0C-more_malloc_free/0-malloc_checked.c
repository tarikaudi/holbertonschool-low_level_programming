#include "main.h"

/**
**malloc_checked - main main
*@b: vari
*Return: 0 as always
*/

void *malloc_checked(unsigned int b)
{
	void *arre;

	arre= malloc(b);
	if (arre == NULL)
	{
		exit(98);
	}

	return (arre);
}
