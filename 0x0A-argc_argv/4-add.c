#include <stdio.h>
#include <stdlib.h>

/**
 *main - main main
 *@argc: argument
 *@argv: string of pointer
 * Return: 0 as always
*/
int main(int argc, char *argv[])
{
	int num, sum, res = 0;

	for (num = 1; num < argc; num++)
	{
		for (sum = 0; argv[num][sum]; sum++)
		{
			if (argv[num][sum] < '0' || argv[num][sum] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		res += atoi(argv[num]);
	}
	printf("%d\n", res);

	return (0);
}
