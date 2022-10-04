#include <stdlib.h>
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
int mul;
mul = 1;

if (argc > 2)
{
for (i = 1; i < argc; i++)
{
mul *= atoi(argv[i]);
}
printf("%d\n", mul);
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
