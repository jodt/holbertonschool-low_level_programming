#include "search_algos.h"
int powof2(int x);
/**
 * exponential_search -  function that searches for a
 * value in a sorted array of integers using Exponential search algorithm
 *
 * @array: array of integers
 * @size: array size
 * @value: value to find
 * Return: value index or -1
 */



int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0;
	int pos = powof2(0), end = size - 1, size_array, result;

	if (array)
	{
		while (value > array[pos] && (powof2(i + 1)) < (int)size)
		{
			if (value <= powof2(i + 1))
			{
				end = powof2(i + 1);
				break;
			}
			printf("Value checked array[%d] = [%d]\n", pos, array[pos]);
			i++;
			pos = powof2(i);
		}

		printf("Value found between indexes [%d] and [%d]\n", pos, end);
		size_array = end - pos + 1;
		result = binary_search(array + pos, size_array, value);
		if (result != -1)
			return (result + pos);
		else
			return (result);
	}
	return (-1);
}

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

/**
 * powof2 - returns the power of two of a number
 *
 * @x: number
 * Return: the power of two of a number
 */
int powof2(int x)
{
	if (x == 0)
		return (1);
	return (2 * powof2(x - 1));
}
