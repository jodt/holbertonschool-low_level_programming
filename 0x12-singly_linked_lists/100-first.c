#include <stdio.h>

int print_first(void) __attribute__ ((constructor));
/**
 * print_first - prints a string before main program
 *
 * Return: Always 0.
 */
int print_first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
	return (0);
}
