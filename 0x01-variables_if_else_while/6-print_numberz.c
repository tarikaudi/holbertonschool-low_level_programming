#include<stdio.h>

/**
 * main - print 1 to 9 with putchat
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
	putchar(i % 10 + '0');
	}
	putchar('\n');
	return (0);
}
