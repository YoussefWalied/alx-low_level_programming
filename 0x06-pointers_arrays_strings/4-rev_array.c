#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * reverse_array - updates the value of a pointer to 98
 * @a: a pointer
 * @n: ss
 *
 * Return: sss
 */
void reverse_array(int *a, int n)
{
	int i, temp;


	for (i = 0; i < n / 2; i++)
	{
		temp = a[n - i - 1];
		a[n - i - 1] = a[i];
		a[i] = temp;
	}
}
