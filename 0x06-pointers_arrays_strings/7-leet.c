#include "main.h"

/**
 * *leet - encode a string into 1337
 * @str: string to encode
 * Return: stiring encoded
 */

char *leet(char *str)
{
	int i = 0, j = 0; /* "i" y "j" son dos variables cualquiera */
	int code[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int decode[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == code[j])
			{
				str[i] = decode[j];
				break;
			}
		}
	}
	return (str);
}
