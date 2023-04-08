#include "main.h"
#include <stdio.h>

/**
* flip_bits - Function that returns the number of bits you would
* need to flip to get from one number to another
* @n: Number parameter
* @m: Number parameter
* Return: Numbers of bits that n have to change for be equal to m
**/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int diff_bits = n ^ m;
unsigned int count = 0;

while (diff_bits)
{
count += diff_bits & 1;
diff_bits >>= 1;
}

return (count);
}
