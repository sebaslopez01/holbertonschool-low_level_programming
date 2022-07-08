#include <string.h>
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 * @n: n bytes to take from s2
 *
 * Return: Pointer to a newly allocated space in memory with concatenated strings
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3 = NULL;

	int i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	unsigned int len1 = strlen(s1), len2 = strlen(s2), n2 = n;

	if (n >= len2)
		n2 = len2;

	s3 = malloc(sizeof(char) * (len1 + n2));

	if (!s3)
		return (NULL);

	while (i != len1 + n2)
	{
		if (i < len1)
			s3[i] = s1[i];
		else
		{
			s3[i] = s2[j];
			j++;
		}

		i++;
	}

	s3[len1 + n2] = '\0';

	return (s3);
}
