#include"variadic_functions.h"
#include<stdarg.h>
#include<stdio.h>
#include<stdlib.h>
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

	if (n == 0)
		return;
	va_start(arglist, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(arglist, char*);
		printf("%s", string == NULL ? "(nil)" : string);
		if (i == n - 1)
			printf("\n");
		else
			if (separator != NULL)
				printf("%s", separator);
	}
	va_end(arglist);
}
