#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * string_toupper - updates the value of a pointer to 98
 * @s: a pointer
 *
 *
 * Return: char * ALWAYS
 */
char *string_toupper(char *s)
{
	int i, sz;

	i = 0;
	while (s[i] != '\0')
		i++;
	sz = i - 1;

	for (i = 0; i <= sz; i++)
		s[i] = toupper(s[i]);

	return (s);
}
