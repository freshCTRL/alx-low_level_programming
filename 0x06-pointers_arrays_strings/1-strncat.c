#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenates two strings.
 * @dest: The destination value
 * @src: The source value
 * @n: Limit of concatenation
 *
 * Return: pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
int dlen = 0, j = 0;

while (dest[dlen])
{
dlen++;
}
while (j < n && src[j])
{
dest[dlen] = src[j]
dlen++
j++
}
dest[dlen + n + 1] ='\0';
return (dest);
}
