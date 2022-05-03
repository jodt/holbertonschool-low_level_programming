#include "search_algos.h"
#include <math.h>
/**
 * jump_search - function that searches for a value in a
 * sorted array of integers using the Jump search algorithm
 *
 * @array: array of integers
 * @size: array size
 * @value: value to find
 * Return: value index or -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t interval = sqrt(size);
	size_t start = 0, jump = interval, i;

	while (start < size && jump < size)
	{
		printf("Value checked array[%ld] = [%d]\n", start, array[start]);
		if (value > array[jump])
		{
			if (jump > size)
				break;
			start = jump;
			jump += interval;

		}
		else
			break;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", start, jump);
	for (i = start; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
