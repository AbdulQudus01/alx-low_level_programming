#include "main.h"

/**
 * print_triangle - Prints a triangle.
 *
 * @size: number of lines
 *
 * Return: no return.
 *
 */
void print_triangle(int size)
{
	int x, y;

	for (x = 1; x <= size; x++)
	{
		for (y = 1; y <= size; y++)
		{
			if (y <= size - x)
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}
