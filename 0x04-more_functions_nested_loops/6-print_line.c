#include "main.h"

/**
 *print_line - print _ depending on the input
 *@n: variable that is used
 *Return: return absolute value
*/
void print_line(int n)
{
	int i;

	if (n >= 1)
	{
		for (i = 0; i < n; i++)
			_putchar('_');	
	} 
		_putchar('\n');
	
}
