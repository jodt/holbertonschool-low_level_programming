#include"main.h"
#include<stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: minimu value;
 * @max: maximum value;
 *
 * Return: array of integers
 */
int *array_range(int min, int max)
{
	int *ptr, i = 0, numberofelements = 0;

	numberofelements = (max - min + 1);
	if (min > max)
		return (NULL);
	if (min == max)
	{
		ptr = malloc(1 * sizeof(int));
		if (ptr == NULL)
			return (NULL);
		*ptr = min;
	}
	if (min < max)
	{
		ptr = malloc(numberofelements * sizeof(int));
		if (ptr == NULL)
			return (NULL);
		for (i = 0; i < numberofelements; i++)
		{
			ptr[i] = min;
			min++;
		}
	}
	return (ptr);
}
