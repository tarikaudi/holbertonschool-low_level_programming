#include "main.h"

/**
 *print_most_numbers - print 1 to 9 but not 2 4
 *
 *Return: 0 as always
*/
void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if ((i != '2') && (i != '4'))
			_putchar(i);
	}
	_putchar('\n');
}
