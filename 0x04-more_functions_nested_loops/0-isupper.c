#include "main.h"
#include <stdio.h>

/**
 * main - Entry point.
 *
 * _isupper: function that checks for uppercase character.
 * @c: is the int that will use for the argument of the function.
 * 
 * Return: 0 (Success).
 */
int main(void)
{
c = 'A';
printf("%c: %d\n", c, _isupper(c));
c = 'a';
printf("%c; %d\n", c, _isupper(c));
}

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
