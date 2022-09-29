#include "main.h"

/**
 * _strlen_recursion - calculates the length of a string
 * @s: string to be used
 *
 * Return: length of the string
 */
int factorial(int n)
{
int next_factorial;

if (n < 0)
return (-1);
else if (n == 0)
return (1);
next_factorial = factorial(n - 1);
return (n * next_factorial);
}
