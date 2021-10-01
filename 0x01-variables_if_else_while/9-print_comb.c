#include <stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers
 * Return: return 0
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i == 57)
		{
			putchar ('\n');
		}
		else
		{
		putchar(',');
		putchar (' ');
		}
	}
	return (0);
}
