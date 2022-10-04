#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point.
 * @argc: argument to main.
 * @argv: argument to main.
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
while (argc--)
{
printf("%s\n", argv[argc]++);
}
return (0);
}
