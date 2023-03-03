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
int k = i + 1;
while (k <= '9')
{
putchar(i);
putchar(k);
if (i != '8')
{
putchar(',');
putchar(' ');
}
k++;
}
i++;
}
putchar('\n');

return (0);
}
