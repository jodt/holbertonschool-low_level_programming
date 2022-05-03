#include "search_algos.h"
/**
 * binary_search - searches for a value in a sorted array of integers
 *  using the Binary search algorithm
 *
 * @array: array of integers
 * @size: array size
 * @value: value to find
 * Return: index of the value or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, middle = 0, i;
	size_t right = size - 1;

	if (array)
	{
		while (left <= right)
		{
			printf("Searching in array: ");
			for (i = left; i <= right; i++)
			{
				if (i == right)
					printf("%d", array[i]);
				else
					printf("%d, ", array[i]);
			}
			printf("\n");
			middle = (left + right) / 2;
			if (array[middle] == value)
				return (middle);
			else if (array[middle] > value)
				right = middle - 1;
			else
				left = middle + 1;
		}
	}
	return (-1);
}
