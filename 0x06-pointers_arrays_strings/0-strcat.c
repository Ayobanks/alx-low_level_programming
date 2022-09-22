#include "main.h"
#include <stdio.h>

/**
 *_strcat - concatenates two the string pointed to by @src to
 * the end of the string pointed to by @dest
 *@dest: string that will be appended
 *@src: string that will be concatenated upon
 *
 *Return: returns pointer to @dest
 */

char *_strcat(char *dest, char *src)
{

int dlen = 0, i;

while (dest[dlen])
{
dlen++;
}

for (i = 0; src[i] != 0; i++)
{
dest[dlen] = src[i];
dlen++;
}

dest[dlen] = '\0';
return (dest);
}
