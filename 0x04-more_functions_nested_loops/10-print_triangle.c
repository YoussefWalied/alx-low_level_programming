#include "main.h"

/**
 * print_triangle - tests if input given is a digit
 * Return: void
 * @size: int
 */

void print_triangle(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - (i + 1); j++)
		{
			_putchar(' ');
		}
		for (; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
