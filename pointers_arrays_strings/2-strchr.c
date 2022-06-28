#include <stddef.h>

/**
 * _strchr - Locates a character in a string
 * @s: String
 * @c: Character to locate
 *
 * Return: Pointer to the first occurrence of the character c
 */
char *_strchr(char *s, char c)
{
	int i;

	char *p = NULL;
	int len = 0;

	while (s[len] != '\0')
		len++;

	if (c == '\0')
		return (&s[len - 1]);


	for (i = 0; i < len; i++)
	{
		if (s[i] == c)
		{
			p = &s[i];
			break;
		}
	}

	return (p);
}
