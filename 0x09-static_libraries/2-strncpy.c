#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * _strncpy - updates the value of a pointer to 98
 * @des: a pointer
 * @src: ss
 * @n: sss
 * Return: char * ALWAYS
 */
char *_strncpy(char *des, char *src, int n)
{
	int j, k;

	j = 0;
	while (src[j] != '\0')
		j++;

	for (k = 0; k < j && k < n; k++)
		des[k] = src[k];

	for (; k < n; k++)
		des[k] = '\0';

	return (des);
}
