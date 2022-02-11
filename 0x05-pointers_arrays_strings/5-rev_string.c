#include "main.h"

/**
 *rev_string - reverse the string
 *@s: stringi
 *Return: return absolute value
*/
void rev_string(char *s)
{
	int i = 0, j = 0, l = 0;
	char a;

	while (s[i] != '\0')
	{
		i++;
	}
		i -= 1;
		l = i;
	for (j = 0; j <= l / 2; j++, i--)
	{
		a = s[i];
		s[i] = s[j];
		s[j] = a;
	}
}
