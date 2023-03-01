#include "main.h"

/**
 * _strcat- function that concatenates two strings.
 *
 * @dest: pointer to destination char
 * @src: pointer to source char
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
   char *result = dest;
    while (*dest != '\0')
    {
        dest++;
    }

    while (*src != '\0')
    {
        *dest++ = *src++;
    }

    *dest = '\0';
    return (result);
}
