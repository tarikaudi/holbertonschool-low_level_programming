#include <stdio.h>

/**
 * main - main to print combs
 * Return: 0
 */
int main(void)
{
	int fnum, fnum2;

	for (fnum = 0; fnum <= 98; fnum++)
	{
		for (fnum2 = fnum + 1; fnum2 <= 99; fnum2++)
		{
			putchar((fnum / 10) + '0');
			putchar((fnum % 10) + '0');
			putchar(' ');
			putchar((fnum2 / 10) + '0');
			putchar((fnum2 % 10) + '0');

			if (fnum == 98 && fnum2 == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
