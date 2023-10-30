#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **e;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);
	e = malloc(sizeof(int *) * height);

	if (e == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		e[x] = malloc(sizeof(int) * width);
		if (e[x] == NULL)
		{
			for (; x >= 0; x--)

			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			e[x][y] = 0;
	}

	return (e);
}
