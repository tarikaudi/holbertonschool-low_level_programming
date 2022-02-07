#include "main.h"
#include <ctype.h>

/**
 *_isalpha - says if it is lower and returns
 *@c: variable that is used by is alpha
 *Return: return 1 if is lowercase 0 if it's not
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
