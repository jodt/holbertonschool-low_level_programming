#include"main.h"
#include<stdio.h>
/**
 * set_bit - function that sets the value of a bit to 1 at a given index.
 * @n: pointer to an unsigned long int
 * @index: index where the value must be set
 *
 * Return: 1 or -1 if it fails
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int modified_bit;

	modified_bit = (1 << index);
	*n |= modified_bit;
	return (1);
}
