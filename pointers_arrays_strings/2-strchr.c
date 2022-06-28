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

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			p = &s[i];
	}

	return (p);
}
