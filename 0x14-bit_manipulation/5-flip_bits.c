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
	int i, count = 0;

	if (n == '\0' || m == '\0')
		return (0);
	for (i = 0; i < 32; i++)
	{
		if (((n >> i) & 1) != ((m >> i) & 1))
			count++;
	}
	return (count);
}
