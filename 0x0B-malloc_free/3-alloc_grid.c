#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - alloccate
 * @width: width
 * @height: height
 * Description: hello worled
 *
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **alloc = (int **)  malloc(sizeof(int) * height);

	if (width <= 0 || height <= 0 || alloc == 0)
		return ('\0');
	for (i = 0; i < height; i++)
	{
		alloc[i] = (int *)malloc(sizeof(int) * width);
		if (alloc[i] == 0)
		{
			while (i--)
				free(alloc[i]);
			free(alloc);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			alloc[i][j] = 0;
	}
	return (alloc);
}
