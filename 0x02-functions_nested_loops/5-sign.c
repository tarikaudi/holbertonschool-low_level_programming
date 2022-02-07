#include "main.h"

/**
 * print_sign - print the sign of the number
 * @n: is the variable that is compared
 * Return: Always 0.
 */
int print_sign(int n);
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	else if (n < 0)
	{
	_putchar('-');
	return (-1);
	}
	else
	_putchar('0');
	return (0);
}
