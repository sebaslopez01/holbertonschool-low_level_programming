#include <stddef.h>

/**
 * _strstr - Locates a substring
 * @haystack: String
 * @needle: Substring to find
 *
 * Return: Pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	char *p = NULL;
	int i = 0;
	int j = 0;
	int first = 1;

	if (needle[0] == '\0')
		return (haystack);

	while (haystack[i])
	{
		if (haystack[i] == needle[j])
		{
			if (first)
			{
				p = &haystack[i];
				first = 0;
			}

			j++;
		}
		else
		{
			j = 0;
			first = 1;
		}

		i++;
	}

	return (p);
}
