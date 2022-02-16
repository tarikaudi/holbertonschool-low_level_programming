#include "main.h"

/**
 *reverse_array - reverse the array
 *@a: pointer
 *@n: numers
 *Return: return absolute value
*/
void reverse_array(int *a, int n)
{
	int i = 0;
	char aux;

	for (i = n - 1; i >= n / 2; i--)
	{
		aux = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = aux;
	}
}
