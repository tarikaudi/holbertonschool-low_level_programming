#include<stdio.h>

/**
 * main - print all the alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
	if (!(c == 'q' || c == 'e'))
	putchar(c);
	}
	putchar('\n');
	return (0);
}
