#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * cap_string - updates the value of a pointer to 98
 * @s: a pointer
 *
 *
 * Return: char * ALWAYS
 */
char *cap_string(char *s)
{
	int i, sz;

	i = 0;
	while (s[i] != '\0')
		i++;
	sz = i - 1;

	if (i > 0)
		s[0] = toupper(s[0]);
	for (i = 1; i <= sz; i++)
	{
		if (s[i - 1] == ' ' || s[i - 1] == ';'
|| s[i - 1] == '.' || s[i - 1] == '!' ||
s[i - 1] == '?' || s[i - 1] == '('
|| s[i - 1] == ')' || s[i - 1] == '{'
|| s[i - 1] == '}' || s[i - 1] == '\n' || s[i - 1] == ',' || s[i - 1] == '\t')
		s[i] = toupper(s[i]);
	}

	return (s);
}
