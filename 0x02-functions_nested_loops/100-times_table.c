#include<stdio.h>
#include"main.h"
/**
 * print_times_table - int parameter
 * Description: prints alphabet in small letters
 *
 * @n : n table
 * Return: void Always
*/
void print_times_table(int n)
{
	int i, j;

	if (n > 15)
		return;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (j != 0)
			{
				printf(", ");
			}
			if (i * j < 100 && j != 0)
				printf(" ");
			if (i * j < 10 && j != 0)
				printf(" ");
			printf("%d", i * j);
		}
		printf("\n");
	}
}
