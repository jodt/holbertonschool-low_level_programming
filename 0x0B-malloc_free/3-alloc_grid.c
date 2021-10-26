#include"main.h"
#include<stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width
 * @height: height
 *
 *Return: pointer to a 2 dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **ptr = {0};
	int i;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = malloc(height * sizeof(int *));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(width * sizeof(int));
		if (ptr[i] == NULL)
		{
			while (i >= 0)
			{
				free(ptr[i]);
				i--;
			}
			free(ptr);
			return (NULL);
		}

	}
	return (ptr);
}
