#include"variadic_functions.h"
/**
 * print_strings - prints string
 * @separator: string printed between the strings
 * @n: number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arglist;
	unsigned int i;
	char *string;

	va_start(arglist, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(arglist, char*);
		printf("%s", string == NULL ? "(nil)" : string);
			if (separator != NULL && i < n - 1)
				printf("%s", separator);
	}
	printf("\n");
	va_end(arglist);
}
