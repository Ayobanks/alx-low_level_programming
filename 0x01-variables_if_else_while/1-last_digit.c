#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**      
 * main - print if the last digit of n is greater than five or is zero or is less than six and not zerp
 * Return: 0
 */                                                          

int main(void)

{

		int n;



			srand(time(0));

				n = rand() - RAND_MAX / 2;

					/* your code goes there */
				int l;

				l = n %10;
				
				if (l > 5)
				{
					printf("Last digit of %d is %d and is greater than 5\n", n, l);
				}
				else if (l == 0)
				{
					printf("Last digit of %d is 0\n", n, l);
				}
				else if (l < 0 && l != 0)
				{
					printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l);
				}
					return (0);
}
