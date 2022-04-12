#include <stdio.h>

/**
 *main - function to print all combinations
 *Return: return 0
 */
int main(void)
{
	int i, d;

	for (i = 0; i <= 9; i++)
	{
		for (d = (i + 1); d <= 9; d++)
		{
			putchar(i + '0');
			putchar(d + '0');
				if (i != 8 || d != 9)
				{
					putchar(',');
					putchar(' ');
				}
		}
	}
	putchar('\n');
	return (0);
}
