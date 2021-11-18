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

	while (index > 0)
	{
		n = n >> 1;
		index--;
		if (!(n))
			return (-1);
	}
	return (n % 2);
}
