#include "main.h"

/**
 * print_binary - main main
 * @n: long int
 * Return: return
 */
void print_binary(unsigned long int n)
{
	int i, binary, aux = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (i = 63; i >= 0; i--)
	{
		binary = n >> i;
		if (binary & 1)
		{
			aux = 1;
			_putchar('1');
		}
		else if (aux == 1)
			_putchar('0');
	}
}
