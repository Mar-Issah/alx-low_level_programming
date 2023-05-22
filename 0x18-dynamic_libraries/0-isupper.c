#include "main.h"

/**
 * _isupper - function checks for uppercase character
 * @c: is the parameter value to check
 * Return: int.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}