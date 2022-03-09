#include "function_pointers.h"

/**
 *array_iterator - main main
 *@array: array
 *@size: size
 *@action: pointer
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
