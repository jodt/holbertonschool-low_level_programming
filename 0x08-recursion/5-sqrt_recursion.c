#include"main.h"
/**
 * racine - find root square
 * @n : integer
 * @i : index
 *
 * Return: square root
 */
int racine(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (racine(n, i + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer
 *
 * Return: result
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (racine(n, 1));
}
