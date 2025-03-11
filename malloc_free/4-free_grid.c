#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free grid
 * @grid: pointer to *grid
 * @height: height
 * Description: this function free the grid previously created
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
