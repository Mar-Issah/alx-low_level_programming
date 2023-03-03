#include "main.h"

#include <string.h>
#include <stdlib.h>

/**
 * infinite_add- function that adds two number.
 *
 * @n1: first number to add
 * @n2: second number to add
 * @r: buffer that the function will use to store the result
 * @size_r: buffer size
 * Return: r
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int len1 = strlen(n1);
int len2 = strlen(n2);
int carry = 0;
int sum = 0;
int i, j;
char *result = (char *) malloc((size_r + 1) * sizeof(char));
    
if (len1 + len2 + 1 > size_r)
{
return 0;
}

for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0 || carry > 0; i--, j--)
{
int digit1 = i < 0 ? 0 : n1[i] - '0';
int digit2 = j < 0 ? 0 : n2[j] - '0';
sum = digit1 + digit2 + carry;
carry = sum / 10;
sum %= 10;
result[len1 + len2 - i - j - 2] = sum + '0';
}
  
result[len1 + len2 - 1] = '\0';
strncpy(r, result, size_r);
free(result);

return (r);
}
