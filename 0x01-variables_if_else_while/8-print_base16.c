#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase
 * Return: return 0
 */
int main(void)
{
	int i, j;

	for (i = 48; i < 58; i++)
		putchar(i);
	for (j = 97; j < 103; j++)
		putchar(j);
	putchar('\n');
	return (0);
}
