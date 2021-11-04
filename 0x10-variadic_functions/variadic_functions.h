#ifndef __VARIADIC_FUNCTIONS_H__
#define __VARIADIC_FUNCTIONS_H__
#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>
/**
 * struct type - struct type
 * @c: character;
 * @ptr_f: pointer to function
 */
typedef struct type
{
	int c;
	void (*ptr_f)(va_list);
} tp;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_int(va_list arglist);
void print_float(va_list arglist);
void print_char(va_list arglist);
void print_string(va_list arglist);
#endif
