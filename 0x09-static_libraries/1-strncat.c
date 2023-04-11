#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * _strncat - updates the value of a pointer to 98
 * @des: a pointer
 * @src: ss
 * @n: sss
 * Return: char * ALWAYS
 */
char *_strncat(char *des, char *src, int n)
{
	int i, sz, j, k;

	i = 0;
	while (des[i] != '\0')
		i++;
	sz = i - 1;

	j = 0;
	while (src[j] != '\0')
		j++;
	sz += j;

	for (k = 0; k < j && k < n; k++)
		des[k + i] = src[k];
	return (des);

}
