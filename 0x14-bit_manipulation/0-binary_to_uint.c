#include "main.h"

/**
 *binary_to_uint - main main
 *@b: pointer
 *Return: return
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int binary = 0, power = 1, lenght;
	int i;

	if (b == NULL)
		return (0);

	lenght = strlen(b);

	for (i = (lenght - 1); i >= 0; i--)
	{
		if (b[i] != 48 && b[i] != 49)
			return (0);
		if (b[i] == '1')
		{
			binary += power;
		}
		power *= 2;
	}
	return (binary);
}
