#ifndef __VARIADIC_FUNCTIONS_H__
#define __VARIADIC_FUNCTIONS_H__
/**
 * struct type - struct type
 * @c: character;
 * @s: type associated to character
 * @specifier: format type
 */
typedef struct type
{
	int c;
	char *s;
	char *specifier;
} tp;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
