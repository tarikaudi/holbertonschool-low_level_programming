#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: array to reverse
 * @n: number of elements of the array
 */

void reverse_array(int *a, int n)
{

	int aux, i = 0;
	int j = n - 1;

	while (i < j)
	{
		aux = *(a + i);
		*(a + i) = *(a + j);
		*(a + j) = aux;
		i++, j--;
	}
}
