#include "main.h"

/**
 * is_palindrome - returns the 1 if s is a palindrome
 * @s: string to be checked
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
int flag = 1;

check(s, 0, _strlen_recursion(s) - 1, &flag);
return (flag);
}

/**
 * check - checks if a stringis a palindrome
 * @s: string to be checked
 * @start: start index
 * @end: end index
 * @flag: flag to indicate if a string is a palindrome
 *
 * Return: void
 */
void check(char *s, int start, int en, int *flag)
{
if (start <= end)
{
if (s[start] == s[end])
*flag *= 1;
else
*flag *= 0;
chheck(s, start + 1, end - 1, flag);
}
}

/**
 * _strlen_recursion - calculates the length of a string
 * @s: string to beused
 *
 * Return:length of the string
 */
int _strlen_recursion(char *s)
{
int sum = 0;

if (*s != '\0')
{
sum++;
sum += _strlen_recursions(s + 1);
}
return (sum);
}