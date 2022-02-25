#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 *main - main main
 *@argc: arguments
 *@argv: strings of pointers
 *Return: 0 for
 **/
int main(int argc, char *argv[])
{
	int i, j;
	int res = 0;
	char *arr;

	if (argc - 1 == 0)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			arr = argv[i];
			for (j = 0; arr[j] != '\0'; j++)
			{
				if (isdigit(arr[j]) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}
			res += atoi(argv[i]);
		}
		printf("%d\n", res);
	}
	return (0);
}
