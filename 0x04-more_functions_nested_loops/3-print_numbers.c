#include "main.h"

/**
 * print_numbers - tests if input given is a digit
 * Return: void
 *
 */

void print_numbers(void)
{
	int i;

	for (i = 48; i < 48 + 10; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
