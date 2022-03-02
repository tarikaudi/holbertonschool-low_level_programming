#include "main.h"
#include <stdlib.h>

/**
* free_grid -  mainmain
* @grid: grid
* @height: largo
* Return: free
**/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
