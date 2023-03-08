#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural
 * square root of a number
 * @n: input number
 *
 * Return: int
 */

int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
  
if (n == 0 || n == 1)
{
return (n);
}

int root = _sqrt_recursion(n - 1) + 1;

if (root * root > n)
{
root--;
}
return (root);
}
