#include"main.h"
#include<stdio.h>
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string 0 ou 1
 *
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int length = 0, i = 0, number = 0;

	if (b == NULL)
		return (0);

	while (b[length])
	{
		if (b[length] != '0' && b[length] != '1')
			return (0);
		length++;
	}
	while (b[i])
	{
		number += (b[i] - '0') << (length - 1);
		length--;
		i++;
	}
	return (number);
}


