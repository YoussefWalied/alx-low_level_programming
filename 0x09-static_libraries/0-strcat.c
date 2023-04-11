#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * _strcat - updates the value of a pointer to 98
 * @des: a pointer
 * @src: ss
 * Return: char * ALWAYS
 */
char *_strcat(char *des, char *src)
{
	int i, j, k;

	i = 0;
	while (des[i] != '\0')
		i++;

	j = 0;
	while (src[j] != '\0')
		j++;

	for (k = 0; k < j; k++)
		des[k + i] = src[k];

	return (des);
}

