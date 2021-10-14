#include"main.h"
/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: integer
 * @n: number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n; i++)
	{
		temp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = temp;
		n--;
	}
}
