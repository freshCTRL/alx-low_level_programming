#include "main.h"
#include <stdio.h>

/**
 * _isupper -  function that checks for uppercase character.
 * @c: is the int that will use for the argument of the function
 *
 * Return: 0 (success)
 */
int _isupper(int c)
{
char c;

if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
c = 'A';
printf("%c: %d\n", c, _isupper(c));
c = 'a';
printf("%c; %d\n", c, _isupper(c));
return (0);
}
