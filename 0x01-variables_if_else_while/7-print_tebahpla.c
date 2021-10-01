#include <stdio.h>
/**
 * main - prints the lowercase alphabet in reverse
 * Return: return 0
 */
int main(void)
{
	int i;

	for (i = 122; i > 96; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
