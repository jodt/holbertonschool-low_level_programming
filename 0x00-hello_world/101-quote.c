#include<stdio.h>
/**
 * main - display a print on stderr without use printf and puts
 * Return: return 1
 */
int main(void)
{
	char str[59] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	int i;

	for (i = 0; i < 60; i++)
	{
		putc(str[i], stderr);
	}
	putc('\n', stderr);
	return (1);
i}
