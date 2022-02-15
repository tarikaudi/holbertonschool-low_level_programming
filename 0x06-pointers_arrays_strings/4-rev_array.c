#include "main.h"

/**
 *rev_string - reverse the string
 *@s: stringi
 *Return: return absolute value
*/
void reverse_array(int *a, int n)
{
	int i = 0;
	char aux;

	for (i = n - 1; i >= n / 2; i--)
	{
		aux = a[n -1 -i];
		a[n -1 -i] = a[i];
		a[i] = aux;
	}
}
