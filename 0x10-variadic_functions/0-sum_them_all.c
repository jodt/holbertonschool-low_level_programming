#include"variadic_functions.h"
#include<stdarg.h>
/**
 * sum_them_all - does the sum of all its parameters
 * @n: integer
 *
 * Return: result of the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arglist;
	unsigned int i, result = 0;

	if (n == 0)
		return (0);
	va_start(arglist, n);
	for (i = 0; i < n; i++)
		result += va_arg(arglist, int);
	va_end(arglist);
	return (result);
}
