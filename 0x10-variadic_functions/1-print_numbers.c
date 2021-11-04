#include"variadic_functions.h"
/**
 * print_numbers - prints numbers
 * @separator: string printed between number
 * @n: number of integers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arglist;
	unsigned int i;

	va_start(arglist, n);
	if (n == 0)
		return;
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arglist, int));
			if (separator != NULL && n != n - 1)
				printf("%s", separator);
	}
	va_end(arglist);
	printf("\n");
}
