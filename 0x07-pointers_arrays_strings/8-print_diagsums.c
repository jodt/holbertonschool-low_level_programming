#include"main.h"
#include<stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: integer
 * @size: size
 */
void print_diagsums(int *a, int size)
{
	int i, j, first_result = 0, second_result = 0;

	for (i = 0; i < size * size; i += size + 1)
		first_result += *(a + i);
	for (j = size - 1; j <= size * size - size; j += size-1)
		second_result += *(a + j);
	printf("%d, %d\n", first_result, second_result);
}
