#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string
 *
 * @s: string to receive
 *
 * Return: int
 */


int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (1 + _strlen_recursion(s));
}

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 * @s: input char
 *
 * Return: int
 */

int is_palindrome(char *s)
{
    int i, j;
    int len = _strlen_recursion(s);

    for (i = 0, j = len - 1; i < j; i++, j--)
    {
        if (s[i] != s[j])
        {
            return (0);
        }
    }

    return (1);
}



