#include <stdio.h>

/**
 * main - prints the program.
 * @void: argument to the function main.
 *
 * Return: 0 (success)
 */

int main(void)
{
int i = '0';

while (i <= '9')
{
int k = '0';
while (k <= '9')
{
int l = '0';
while (l <= '9')
{
int m = '0';
while (m <= '9')
{
if ((i <= l) && ((m > k)) || (l > i))
{
putchar(i);
putchar(k);
putchar(' ');
putchar(l);
putchar(m);
if (i <= '9')
{
putchar(',');
putchar(' ');
}
}
m++;
}
l++;
}
k++;
}
i++;
}
putchar('\n');
return (0);
}
