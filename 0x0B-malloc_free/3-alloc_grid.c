#include "main.h"

/**
 * alloc_grid - function return pointer to a 2 dimensional array of integers
 * @width: width of array
 * @height: height of array
 *
 * Return: pointer to a 2 dimensional array of integers
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i;
	int j;

	if (width < 1 || height < 1)
		return (NULL);
	arr = malloc(sizeof(int *) * height);
	if (!arr)
		return (NULL);
	i = 0;
	while (i < height)
	{
		arr[i] = malloc(sizeof(int) * width);
		if (!arr[i])
		{
			i--;
			while (i > -1)
				free(arr[i--]);
			free(arr);
			return (NULL);
		}
		j = 0;
		while (j < width)
		{
			arr[i][j] = 0;
			j++;
		}
		i++;
	}
	return (arr);
}
