#include<stdio.h>

void print_alphabet(void);

/**
 * main - calls print_alphabet func
 *
 * Return: Always 0.
 */
int main(void)
{
	print_alphabet();
	return (0);
}

/**
 * print_alphabet - prints all the alphabet
 *
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
	putchar(c);
	}
	putchar('\n');
}

