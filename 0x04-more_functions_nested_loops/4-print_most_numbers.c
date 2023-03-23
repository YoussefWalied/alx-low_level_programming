#include "main.h"

/**
 * print_most_numbers - tests if input given is a digit
 * Return: void
 *
 */

void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 48 + 10; i++)
	{
		if (!(i - 48 == 2 || i - 48 == 4))
			_putchar(i);
	}
	_putchar('\n');
}
