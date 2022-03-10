#include "variadic_functions.h"

/**
 * sum_them_all - main main
 * @n: args to be sum
 * Return: Sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;

	va_list list;

	unsigned int i = 0;

	va_start(list, n);

	if (n == 0)
	{
		return (0);
	}
		for (i = 0; i < n; i++)
		{
			sum += va_arg(list, unsigned int);
		}
	va_end(list);

	return (sum);
}
