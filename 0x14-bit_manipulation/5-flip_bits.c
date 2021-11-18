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
	unsigned int count = 0;

	while (n != 0 || m != 0)
	{
		if ((n & 1) != (m & 1))
		{
			count++;
		}
			n >>= 1;
			m >>= 1;
	}
	return (count);
}
