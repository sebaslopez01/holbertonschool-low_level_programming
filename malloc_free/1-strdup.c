#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Creates a copy of the given string
 * @str: String to copy
 *
 * Return: A pointer to a newly allocated space in memory, NULL if error
 */
char *_strdup(char *str)
{
	unsigned int i;

	char *new_str = NULL;

	if (str == NULL)
		return (NULL);

	new_str = malloc(sizeof(char) * (strlen(str) + 1));

	if (!new_str)
		return (NULL);

	for (i = 0; i <= strlen(str); i++)
		new_str[i] = str[i];

	return (new_str);
}
