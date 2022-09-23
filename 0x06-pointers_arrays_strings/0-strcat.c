#include "main.h"
#include "stdio.h"

/**
 * _strcat - concatenates two strings.
 * @dest: destination string.
 * @src: the source string.
 *
 * Return: A pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
int dlen = 0, i;

while (dest[dlen])
{
dlen++;
}
