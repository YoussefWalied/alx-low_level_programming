#include <stdio.h>
#include <string.h>
/**
 * _strcpy - updates the value of a pointer to 98
 * @des: a pointer
 * @src: ddd
 * Return: char* ALWAYS
 */
char *_strcpy(char *des, char *src)
{
	int i, sz;

	i = 0;
	while (src[i] != '\0')
		i++;
	sz = i;
	for (i = 0; i <= sz; i++)
	{
		des[i] = src[i];
	}
	return (des);

}
