#include "search_algos.h"
int binary_recur(int *array, int left, int right, size_t size, int value);

/**
 * advanced_binary - binary search function
 *
 * @array: array of integers
 * @size: array size
 * @value: value to find
 * Return: value index or -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array)
		return (binary_recur(array, 0, size - 1, size, value));
	return (-1);
}

/**
 * binary_recur - binary search using recursion
 *
 * @array: array of integers
 * @left: start of the array
 * @right: end of the array
 * @size: array size
 * @value: value to find
 * Return: value index or -1
 */
int binary_recur(int *array, int left, int right, size_t size, int value)
{

	int middle = (left + right) / 2, i = 0;

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		if (i == right)
			printf("%d\n", array[i]);
		else
			printf("%d, ", array[i]);
	}
	if (left == right || array[left] == array[right])
	{
		if (value == left || value == array[left])
			return (left);
		else
			return (-1);
	}
	if (value <= array[middle])
		right = middle;
	else
		left = middle + 1;

	return (binary_recur(array, left, right, size, value));
}
