#include"main.h"
/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: number
 * @index: index
 *
 * Return: the byte at the index
 */
int get_bit(unsigned long int n, unsigned int index)
{

	if (index > 31)
		return (-1);
	while (index > 0)
	{
		n = n >> 1;
		index--;
	}
	return (n % 2);
}
