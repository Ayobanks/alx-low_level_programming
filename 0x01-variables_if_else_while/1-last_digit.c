#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print if the last digit of n is greater than five or is zero
 *
 * Return: 0
 */
int main(void)
{
int n;
int l;

srand(time(0));
n = rand() - RAND_MAX / 2;
l = n % 10;
 /* your code goes there */
if (l > 5)
{
	printf("Last digit of %d is %d and is greater than 5\n", n, l);
}
else if (l == 0)
{
	printf("Last digit of %d is %d and is 0\n", n, l);
}
else if (l < 0 && l != 0)
{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l);
}
	return (0);
}
