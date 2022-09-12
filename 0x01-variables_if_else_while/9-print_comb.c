#include <stdio.h>
/**
 * main - difficult
 *
 * Return: 0
 */
int main(void)
{
	int cee;

for (cee = '0' ; cee <= '9' ; cee++)
{
	putchar(cee);
if (cee != '9')
{
	 putchar(',');
	 putchar(' ');
}
}
putchar('\n');
return (0);
}

