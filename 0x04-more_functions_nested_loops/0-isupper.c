#include "main.h"

/**
 * _isupper - says if the letters is upper
 *@c: variable
 * Return: Always 0 (Success)
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
		return (0);
}
