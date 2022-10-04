#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: argument to main
 * @argv: argument to main
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
int i;
int add;
add = 0;

if (argc == 1)
{
printf("%d\n", 0);
}
else
if (argc > 1 && argc != 2)
{
for (i = 1; i < argc; i++)
{
add += atoi(argv[i]);
}
printf("%d\n", add);
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
