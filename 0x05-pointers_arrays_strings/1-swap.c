#include "main.h"

/**
 *swap_int - show absolute value
 *@a: pointer
 *@b: pointer2
 *Return: return absolute value
*/
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
