#include "main.h"
#include <stdio.h>

/**
 * main - program that prints _putchar.
 *
 * Return: int
 */

int main(void)
{
	int i = 0;
	char put_char[8] = "_putchar";

	while (i < 8)
	{
		_putchar(put_char[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
