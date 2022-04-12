#include <stdio.h>

/**
 *main - print more combinations
 *Return: 0
 */
int main(void)
{
	int i, j, f;

	for (i = 0; i <= 9; i++)
	{
		for (j = (i + 1); j <= 9; j++)
		{
			for (f = (j + 1); f <= 9; f++)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(f + '0');
					if (i != 7 || j != 8 || f != 9)
					{
						putchar(',');
						putchar(' ');
					}
			}
		}
	}
	putchar('\n');
	return (0);
}
