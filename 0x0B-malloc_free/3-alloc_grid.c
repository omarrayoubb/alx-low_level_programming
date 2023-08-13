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
	int **arr;

	if (width <= 0 || height <= 0)
		return ('\0');
	arr = (int **) malloc(sizeof(*arr) * height);
	if (arr == 0)
		return ('\0');
	for (i = 0; i < height; i++)
	{
		arr[i] = (int *) malloc(sizeof(**arr) * width);
		if (arr[i] == 0)
		{
			while (i--)
				free(arr[i]);
		free(arr);
		return ('\0');
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0 ; j < width; j++)
			arr[i][j] = 0;
	return (arr);
}
