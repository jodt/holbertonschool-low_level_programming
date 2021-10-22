#include<stdio.h>
/**
 * main - prints the number of arguments
 * @argc: number of arguments
 * @argv: list of arguments
 *
 * Return: 0
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc-1);
	return (0);
}
