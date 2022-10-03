#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 * @argc: number of arguments passed to the function
 * @argv: argument vector of pointers to string
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int a, b, mul;

	if (argc == 3)
{
	a = atoi(argv[1]);
	b = atoi(argv[2]);

mul = a * b;
printf("%d\n", mul)
}
else
{
	printf("Error\n");
}
return (0);
}
