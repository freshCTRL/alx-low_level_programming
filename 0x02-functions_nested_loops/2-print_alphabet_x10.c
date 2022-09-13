#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
void print_alphabet_x10(void);
int main(void)
{
char c;
int counter = 0;
int haltcounter = 0;

while (haltcounter == 0)
{
if (counter < 10)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
counter++;
}
else
{
haltcounter = 1;
}
}
}
