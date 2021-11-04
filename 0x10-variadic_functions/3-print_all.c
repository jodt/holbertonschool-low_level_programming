#include"variadic_functions.h"
/**
 * print_all -  function that prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list arglist;
	tp tps[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string}
	};
	int i = 0, j = 0;
	char *separator = "";

	va_start(arglist, format);
	while (format != NULL && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == tps[j].c)
			{
				printf("%s", separator);
				tps[j].ptr_f(arglist);
				break;
			}
			j++;
		}
		separator = ", ";
		i++;
	}
	printf("\n");
	va_end(arglist);
}
/**
 * print_int - prints int element
 * @arglist: element of list
 */
void print_int(va_list arglist)
{
	printf("%d", va_arg(arglist, int));
}
/**
 * print_char - prints char element
 * @arglist: element of list
 */
void print_char(va_list arglist)
{
	printf("%c", va_arg(arglist, int));
}
/**
 * print_float - prints float element
 * @arglist: element of list
 */
void print_float(va_list arglist)
{
	printf("%f", va_arg(arglist, double));
}
/**
 * print_string - prints string element
 * @arglist: element of list
 */
void print_string(va_list arglist)
{
	char *str = (char *) va_arg(arglist, char *);

	if (str == NULL || *str == '\0')
		str = "(nil)";
	printf("%s", str);
}
