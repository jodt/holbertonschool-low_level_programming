#include"main.h"
/**
 * flip_bits - search number of bits to flip to get from one to antoher num.
 * @n: first number
 * @m: second number
 *
 * Return: number of bits modified
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0, difference;

	difference = n ^ m;

	while (difference > 0)
	{
		if (difference & 1)
			count++;
		difference >>= 1;
	}
	return (count);
}
