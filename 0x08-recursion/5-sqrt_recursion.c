#include "main.h"

/**
 * search_base - searches
 * @n: first var
 * @i: second var
 * Return: return recursive
 */

int search_base(int n, int i)
{
	if (i == n)
		return (-1);
	if ((i * i) == n)
		return (i);
	return (sqrt_rec(n, i + 1));
}

/**
 * _sqrt_recursion - recursive
 * @n: var
 * Return: return recursive
 */

int _sqrt_recursion(int n)
{
	int i = 0;

	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (sqrt_rec(n, i));
}
