#include "search_algos.h"
/**
 * linear_search - searches for a value in an array of integers
 *
 * @array: array of integers
 * @size: array size
 * @value: value to find
 * Return: index of the value or -1
 */
int linear_search(int *array, size_t size, int value)
{
	if (array)
	{
		size_t i = 0;

		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			if (array[i] == value)
			{
				return (i);
			}
		}
	}
	return (-1);
}
