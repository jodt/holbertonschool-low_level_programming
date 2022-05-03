#include "search_algos.h"
/**
 * interpolation_search -  function that searches for a
 * value in a sorted array of integers using the Interpolation search algorithm
 *
 * @array: array of integers
 * @size: array size
 * @value: value to find
 * Return: value index or -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1;
	size_t pos;

	while (array[low] != array[high]
	&& value >= array[low] && value <= array[high])
	{
		pos = low + (((double)(high - low) / (array[high] - array[low]))
		* (value - array[low]));
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (value == array[pos])
			return (pos);
		else if (value < array[pos])
			high = pos - 1;
		else if (value > array[pos])
			low = pos + 1;
	}
	if (value == array[low])
	{
		printf("Value checked array[%ld] = [%d]\n", low, array[low]);
		return (low);
	}
	else
	{
		pos = low + (((double)(high - low) / (array[high] - array[low]))
		* (value - array[low]));
		printf("Value checked array[%ld] is out of range\n", pos);
		return (-1);
	}
}
