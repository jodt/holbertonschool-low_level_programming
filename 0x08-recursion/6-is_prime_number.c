#include"main.h"
/**
 * checkprime - check if a integer is a prime number
 * @n: integer
 * @i: index
 *
 * Return: 1 if is integer
 */
int checkprime(int n, int i)
{
	if (n % i == 0 && i != n)
		return (0);
	if (i == n)
		return (1);
	return (checkprime(n, i + 1));
}

/**
 * is_prime_number - find  if the input integer is a prime number
 * @n: integer
 *
 * Return: 1 if the integer is a prime number
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (checkprime(n, 2));
}


