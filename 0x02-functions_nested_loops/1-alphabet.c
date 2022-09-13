#include "main.h"

/**
 * print_alphabet - prototype referenced in the header main
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
char c;

for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
