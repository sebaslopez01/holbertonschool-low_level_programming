#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: Pointer to the contents of s1, followed by the contents of s2
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j;

	char *s3 = NULL;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s3 = malloc(sizeof(char) * (strlen(s1) + strlen(s2) - 1));

	if (!s3)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		s3[i] = s1[i];

	for (j = 0; s2[j] != '\0'; j++)
	{
		s3[i] = s2[j];
		i++;
	}

	s3[i] = '\0';

	return (s3);
}
