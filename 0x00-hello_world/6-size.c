#include <stdio.h>

/*
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main (void)
{
    char c;
    int i;
    long int g;
    long long int h;
    float f;
               printf("size of a char: %lu byte(s)\n", (long unsigned)sizeof(c));
	       printf("size of an int: %lu byte(s)\n", (long unsigned)sizeof(i));
	       printf("size of a long int: %lu byte(s)\n", (long unsigned)sizeof(g));
	       printf("size of a long long int: %lu bytes\n", (long unsigned)sizeof(h));
	       printf("size of a float: %lu bytes\n", (long unsigned)sizeof(f));
               return (0);
}
