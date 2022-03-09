#include "function_pointers.h"

/**
 *array_iterator - execute a function dada como parametro
 *@array: receive arrays
 *@size: receive a size of arrays
 *@action: pointer to a function for execute
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;
	int s = size;

	if (s >= 0 && array != NULL && action != NULL)
	{
	for (i = 0; i < s; i++)
	{
		action(array[i]);
	}
	}
}
