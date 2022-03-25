#include "main.h"

/**
 *get_bit - main main
 *@n: int
 *@index: index
 *Return: as always
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	if (((n >> index) & 1) == 0)
		return (0);
	return (1);
}
