#include "main.h"
#include <stdlib.h>

/**
 *main - main main
 *@argc: arguments
 *@argv: strings of pointers
 *Return: 0 for
 **/
int main(int argc, char *argv[])
{
	int i = atoi(argv[1]);
	int j = atoi(argv[2]);
	int mul;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);	
	}
	mul = i * j;
	printf("%d\n", mul);
	return (0);
}
