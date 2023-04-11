#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of the array
 * @height: height of the array
 *
 * Return: Returns NULL on failure and if with or height is 0 or negative
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **arr;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = (int **) malloc(height * sizeof(int));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < width; i++)
		arr[i] = (int *) malloc(width * sizeof(int));
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	}

	return (arr);
}
