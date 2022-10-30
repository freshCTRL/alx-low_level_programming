#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the decimal
 *
 * Return: returns nothing
 */
void print_binary(unsigned long int n)
{
int i, j = 0;

for (i = 63; i >= 0; i--)
{
if ((n >> i) & 1)
{
_putchar('1');
j++;
}
else
if (j > 0)
_putchar('0');

if (j == 0)
_putchar('0');
}
