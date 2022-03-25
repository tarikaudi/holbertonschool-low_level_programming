#include "main.h"

/**
 *binary_to_uint - main main
 *@b: pointer
 *Return: return
 */
unsigned int binary_to_uint(const char *b)
{
	int num = b;
	int base = 1;
	int rem;
	int binary_value = b;

	if (b == NULL)
	{
		return (0);
	}
	else
	{
		while (b > 0)
		{
		rem = num % 10;
		decimal_value = decimal_value + rem * base;
		num = num / 10 ;
		base = base * 2;
		}
	}
	return (decimal_value);
}
