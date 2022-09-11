#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char c;
int i;
long int g;
long long int h;
float f;
printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(g));
printf("size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(h));
printf("size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
