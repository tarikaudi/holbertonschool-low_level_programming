#include "main.h"
#include "stdio.h"

/**
  * print_to_98 - Prints all natural numberts
  * @n: variable used to store numbers
  *
  * Return: Always 0.
  */
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
			printf(", ");
			}
			n--;
		}
	}
	else
	{
		while (n <= 98)
		{
			printf("%d", n);
		if (n != 98)
		{
			printf(", ");
		}
		n++;
		}
	}
	printf("\n");
}
