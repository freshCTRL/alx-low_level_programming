#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: returns integer
 */
int get_endianness(void)
{
unsigned int n;
char *c;

n = 1;
c = (char *)&n;

return ((int) *c);
}
