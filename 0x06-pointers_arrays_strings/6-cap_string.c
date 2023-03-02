#include <ctype.h>
#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string.
 * @ch: Pointer to Char
 * Return: char.
 */


char *cap_string(char *ch)
{
    int capitalize_next = 1;
    for (int i = 0; ch[i] != '\0'; i++)
    {
        if (isspace(ch[i]) || ch[i] == ',' || ch[i] == ';' || ch[i] == '.' ||
            ch[i] == '!' || ch[i] == '?' || ch[i] == '"' || ch[i] == '(' ||
            ch[i] == ')' || ch[i] == '{' || ch[i] == '}')
        {
            capitalize_next = 1;
        }
        else if (capitalize_next)
        {
            ch[i] = toupper(ch[i]);
            capitalize_next = 0;
        }
        else
        {
            ch[i] = tolower(ch[i]);
        }
    }
    return (ch);
}
