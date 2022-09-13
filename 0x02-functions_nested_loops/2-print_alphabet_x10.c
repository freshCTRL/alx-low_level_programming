#include<stdlib. h>
#include<string. h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
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
putchar(c);
}
putchar('\n');
counter++;
}
else
{
haltcounter = 1;
}
}
return (0);
}
