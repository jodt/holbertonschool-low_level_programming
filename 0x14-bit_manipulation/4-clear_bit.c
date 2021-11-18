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
	unsigned long int modified_bit;

	if (index > 31)
		return (-1);

	modified_bit = (1 << index);

	if (*n != modified_bit)
		*n = *n & ~modified_bit;
	else
		*n = *n ^ modified_bit;

	return (1);
}
