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
	size_t jump = 0, start = 0, i;

	if (array && value >= array[0])
	{

		while (value > array[jump] && start < size)
		{
			if (jump > size)
				break;
			printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
			start = jump;
			jump += interval;
		}
		printf("Value found between indexes [%ld] and [%ld]\n", start, jump);
		for (i = start; i < size; i++)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			if (value == array[i])
				return (i);
		}
	}
	return (-1);
}
