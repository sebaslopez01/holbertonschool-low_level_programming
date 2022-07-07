#include <stdlib.h>

/**
 * alloc_grid - Creates a 2 dimensional array of integers
 * @width: Width of array
 * @height: Height of array
 *
 * Return: A pointer to the 2 dimensional array
 */
int **alloc_grid(int width, int height)
{
	int i, j;

	int **grid = NULL;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(sizeof(int *) * height);

	if (!grid)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);

		if (!grid[i])
			return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
