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
	int i, j, z, d, t, sum;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			sum = i - 48;
			sum = sum * 10;
			sum = sum + (j - 48);
			for (z = sum + 1; z <= 99; z++)
			{
				d = (z % 10) + 48;
				t = ((z / 10) % 10) + 48;
				if (i == 57 && j == 57 && d == 57 && t == 57)
					continue;
				putchar(i);
				putchar(j);
				putchar(' ');
				putchar(t);
				putchar(d);

				if (!(i == 57 && j == 56 && d == 57 && t == 57))
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
