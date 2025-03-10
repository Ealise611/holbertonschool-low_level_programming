#include "main.h"
#include <stdlib.h>


/**
 * alloc_grid - Allocates memory for a 2D array of integers.
 * @width: The number of columns in the grid.
 * @height: The number of rows in the grid.
 *
 * Description: This function dynamically allocates memory for a
 * two-dimensional array of integers, initializing all elements to 0.
 * If width or height is 0 or negative, the function returns NULL.
 * If memory allocation fails at any step, all previously allocated
 * memory is freed, and the function returns NULL.
 *
 * Return: A pointer to the allocated 2D array.
 * Returns NULL if width or height is <= 0 or if memory allocation fails.
 *
 * Note: The caller is responsible for freeing the allocated memory.
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	/*allocation memory for height*/
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		/*allocate memory for width*/
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
		for (j = 0; j < height; j++;)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
