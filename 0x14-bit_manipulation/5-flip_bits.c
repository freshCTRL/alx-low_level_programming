#include "main.h"

/**
 * flip_bits -  flip to get from one number to another
 * @n: the first number
 * @m: the other number
 *
 * Return: returns number of bits you would needed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int number;

for (number = 0; n || m; n >>= 1, m >>= 1)
{
if ((n & 1) != (m & 1))
number++;
}
return (number);
}
