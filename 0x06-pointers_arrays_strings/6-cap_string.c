#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string.
 * @ch: Pointer to Char
 * Return: char.
 */

char *cap_string(char *ch)
{
int i = 0;
int cap_next = 1;

while (*(ch + i) != '\0')
{
if (cap_next && (*(ch + i) >= 'a' && *(ch + i) <= 'z'))
{
*(ch + i) = *(ch + i) - 'a' + 'A';
}
cap_next = 0;

switch (*(ch + i))
{
case ' ':
case '\t':
case '\n':
case ',':
case ';':
case '.':
case '!':
case '?':
case '"':
case '(':
case ')':
case '{':
case '}':
cap_next = 1;
break;
default:
break;
}

i++;
}

return (ch);
}

