#include "variadic_functions.h"

/**
 * sum_them_all - main main
 * @n: args to be sum
 * Return: Sum
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);

	if(n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			printf("%d", va_arg(list, int));
			if (i < n && separator != NULL)
			{
				printf("%s", separator);
			}
		}
		va_end(list);
	}
	printf("\n");
}
