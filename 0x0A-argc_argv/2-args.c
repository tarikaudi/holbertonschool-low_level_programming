#include "main.h"

/**
 *main - main main
 *@argc: arguments
 *@argv: strings of pointers
 *Return: 0 for
 **/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
