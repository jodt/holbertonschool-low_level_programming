#include"variadic_functions.h"
#include<stdarg.h>
#include<stdio.h>
/**
 * print_numbers - prints numbers
 * @separator: string printed between number
 * @n: number of integers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arglist;
	unsigned int i;

	if (n == 0)
		return;
	va_start(arglist, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arglist, int));
		if (i == n - 1)
			printf("\n");
		else
			if (separator != NULL)
				printf("%s", separator);
	}
	va_end(arglist);
}
