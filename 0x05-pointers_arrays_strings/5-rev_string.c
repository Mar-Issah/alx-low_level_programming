#include "main.h"

/**
 * rev_string - function that prints a string, in reverse
 * @s: String to print
 * Return: nothing.
 */

void rev_string(char *s)
{

int i = 0;
int aux = 0;
char ltemp;

while (*(s + i) != '\0')
i += 1;
i -= 1;

while (aux < i)
{
ltemp = s[i];
s[i] = s[aux];
s[aux] = ltemp;
aux++;
i--;
}
}
