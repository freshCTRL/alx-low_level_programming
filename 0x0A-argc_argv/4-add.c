#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point.
 * @argc: argument to main.
 * @argv: argument to main.
 *
 * Return: 0(Success)
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
if (argc > 1)
{
for (i = 1; i < argc; i++)
{
add += atoi(argv[i]);
}
printf("%d\n", add);
}
else
if (!(add >= 0))
{
printf("%s\n", "Error");
return (1);
}
return (0);
}
