#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10.c - print 10 times with no return
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
char c, i;

for (i = 0; i <= 9; i++)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
}
