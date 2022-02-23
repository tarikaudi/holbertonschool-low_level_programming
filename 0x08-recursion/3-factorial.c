#include "main.h"

/**
 * factorial - factorial with recursive
 *@n: int that fac
 * Return: -1 error 1 0k result
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
