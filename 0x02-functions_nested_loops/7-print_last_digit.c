#include "main.h"

/**
 *print_last_digit - print the last digit
 *@i: variable that is used by func
 *Return: return the last digit
*/
int print_last_digit(int i)
{
	int ld = i % 10;

	if (ld < 0)
		ld *= -1;
	else
		_putchar('0' + ld);
	return (ld);
}
