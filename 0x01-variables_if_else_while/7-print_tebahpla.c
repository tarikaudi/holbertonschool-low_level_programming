#include<stdio.h>

/**
 * main - print 1 to 9
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a' ; c--)
	{
	putchar(c);
	}
	putchar('\n');
	return (0);
}
