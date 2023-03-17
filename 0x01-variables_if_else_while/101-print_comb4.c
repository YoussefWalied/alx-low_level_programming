#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/**
 * main - Entry point
 * Return: Always 1 (Success)
 */
int main(void)
{
	int i, j, z;

	for (i = 48; i <= 57; i++)
	{
		for (j = i + 1; j <= 57; j++)
		{
			for (z = j + 1; z <= 57; z++)
			{
				putchar(i);
				putchar(j);
				putchar(z);
				if (!(i == 55 && j == 56 && z == 57))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
