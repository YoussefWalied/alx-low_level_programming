#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * leet - updates the value of a pointer to 98
 * @s: a pointer
 *
 *
 * Return: char * ALWAYS
 */
char *leet(char *s)
{
	int i, sz;
	char alp[] = "4BCD3FGHIJK1MN0PQRS7UVWXYZ";

	i = 0;
	while (s[i] != '\0')
		i++;
	sz = i - 1;

	for (i = 0; i <= sz; i++)
	{
		if (toupper(s[i]) == 'A' || toupper(s[i]) == 'T' || toupper(s[i]) == 'O'
			|| toupper(s[i]) == 'E' || toupper(s[i]) == 'L')
		{
			s[i] = alp[toupper(s[i]) - 'A'];
		}

	}

	return (s);
}
