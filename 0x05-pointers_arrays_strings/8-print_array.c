#include<stdio.h>
#include"main.h"
/**
 * print_array - prints n elements of an array of integer
 * @a: array
 * @n: numer of element
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i == n - 1)
			printf("%d\n", a[i++]);
		else
			printf("%d, ", a[i++]);
	}
}
