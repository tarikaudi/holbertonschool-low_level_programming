#include "main.h"
#include <stdlib.h>

/**
*alloc_grid - main main
*@width: widht
*@height: alto
*Return: 0 as always
*/

int **alloc_grid(int width, int height)
{
	int **arre;
	int i, j;

	if (width < 1)
		return (NULL);
	if (height < 1)
		return (NULL);
	arre = malloc(height * sizeof(int *));

	if (arre == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arre[i] = malloc(width * sizeof(int));
		if (arre[i] == NULL)
		{
			for (i = 0; i < height; i++)
				free(arre[i]);
			free(arre);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			arre[i][j] = 0;
	}

	return (arre);
}
