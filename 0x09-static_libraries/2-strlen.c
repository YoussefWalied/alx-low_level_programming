/**
 * _strlen - updates the value of a pointer to 98
 * @s: a pointer
 *
 * Return: int ALWAYS
 */
int _strlen(char *s)
{
	int cnt;

	cnt = 0;
	while (s[cnt] != '\0')
		cnt++;

	return (cnt);
}

