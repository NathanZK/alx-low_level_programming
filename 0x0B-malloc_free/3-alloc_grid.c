#include "main.h"

/**
* alloc_grid - two dimensional array
* @width: width
* @height: height
* Return: two dimensional pointer
*/

int **alloc_grid(int width, int height)
{
	int **out;
	int i, j, l ,k;

	if (width <= 0 || height <= 0)
		return (NULL);
	out = malloc(height * sizeof(int *));
	if (out == NULL)
	{
		free(out);
		return (NULL);
	}

	for (i = 0; i < width; i++)
	{
		out[i] = malloc(width * sizeof(int));
		if (out[i] == NULL)
		{
			for (j = i; j >= 0; j--)
				free (out[i]);
			free(out);
			return (NULL);
		}
	}
	for (l = 0; l < height; l++)
	{
		for (k = 0; k < width; k++)
			out[l][k] = 0;
	}
	return (out);

}
