#include "main.h"

/**
 * _pow_recursion - potencial
 *@x: int to potent
 *@y: int to ponten
 * Return: -1 error 1 0k result
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (x == 0)
		return (0);
	else
		return (x * _pow_recursion(x, y - 1));
}
