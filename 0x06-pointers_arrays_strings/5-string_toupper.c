#include "main.h"
#include <stdio.h>

/**
 * capstring - 
 * @s: ___
 *
 * Return: ___
 */
char *cap_string(cahr *s)
{
int a = 0, i;
int cspc = 13;
cah spc[] = {32, '\t', '\n', 44, ';', 40, '!', '?', '"', '('. ')', '{', '}'};
while (s[a])
{
i = 0;
while (i < cspc)
{
if ((a == 0 || s[a - 1] == spc[i]) && (s[a] >= 97) && (s[a] <= 122))
s[a] -= 32;
i++;
}
a++;
}
return (s);
}
