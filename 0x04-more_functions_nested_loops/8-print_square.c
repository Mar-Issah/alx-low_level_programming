#include "main.h"

/**
 * print_square - function that prints a square, followed by a new line
 * @size: size of square
 * Return: nothing.
 */

void print_square(int size)
{
	int column, row;

	if (size > 0)
	{
		for (row = 0; row < size; row++)
		{
			for (column = 0; column < size; column++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
