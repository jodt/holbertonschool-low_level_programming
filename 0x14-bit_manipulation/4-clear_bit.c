#include"main.h"
#include<stdio.h>
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to a number
 * @index: index where the value must be clear
 *
 * Return: 1 or -1 if it's fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = 0, j = 0, result = 1, exponent, number = 0;
	unsigned int rest [32] = {0};

	if (index > 31)
		return (-1);
	while (*n)
	{
		rest[i++] = (*n - (2 * (*n >> 1)));
		*n = *n >> 1;
	}
	rest[index] = 0;
	while (j < 32)
	{
		if (rest[j] == 1)
		{
			exponent = j;
			result = 1;
			while (exponent > 0)
			{
				result *= 2;
				exponent--;
			}
			number += result;
			*n = number;
		}
		j++;
	}
	return (1);
}
