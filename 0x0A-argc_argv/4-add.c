#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point
 * @argc: argument to main
 * @argv: argument to main
 *
 * Return: 0
 */
int main(int argc, int *argv[])
{
int i;
int add;
add = 0;

if (argc == 1)
{
printf("%d\n", 0);
}
else
if (argc > 2)
{
for (i = 1; i < argc; i++)
{
add += argv[i];
printf("%d\n", add);
}
}
else
{
{
printf("%s\n", "Error");
}
return (1);
}
return (0);
}
