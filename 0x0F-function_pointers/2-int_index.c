#include "function_pointers.h"

/**
*int_index - main main
*@array: array
*@size: size
*@cmp: func
*Return: -1 0
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int siz = size;

	if (cmp != NULL && array != NULL)
	{
		if (siz <= 0)
		return (-1);

		for (i = 0; i < siz; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
