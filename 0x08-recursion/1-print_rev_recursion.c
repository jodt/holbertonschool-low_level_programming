#include"main.h"
/**
 * _print_rev_recursion - function that prints a string in reverse
 * @s: string
 */
#include<stdio.h>
void _print_rev_recursion(char *s)
{
	if (!(*s))
	{
		return;
	}
	_print_rev_recursion(s + 1);
	putchar(*s);
}
