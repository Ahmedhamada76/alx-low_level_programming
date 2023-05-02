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
	int **moi;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	moi = malloc(sizeof(int *) * height);

	if (moi == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		moi[x] = malloc(sizeof(int) * width);

		if (moi[x] == NULL)
		{
			for (; x >= 0; x--)
				free(moi[x]);

			free(moi);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			moi[x][y] = 0;
	}

	return (moi);
}

