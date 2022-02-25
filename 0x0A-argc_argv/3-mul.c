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
	int i;
	int j;
	int mul;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);	
	}

	i = atoi(argv[1]);
	j = atoi(argv[2]);
	mul = i * j;
	printf("%d\n", mul);
	return (0);
}
