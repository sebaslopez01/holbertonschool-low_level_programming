#include <stdlib.h>
#include <string.h>

/**
 * count_words - Counts number of words in a string
 * @str: String to count
 *
 * Return: Number of words
 */
int count_words(char *str)
{
	int i = 0, count = 0;

	if (str == NULL || *str == '\0')
		return (0);

	while (str[i] != '\0')
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			count++;
		i++;
	}

	return (count);
}

/**
 * count_length - Counts length of string with space
 * @str: String to count
 * @k: Pointer to k counter
 *
 * Return: Length of string
 */
int count_length(char *str, int *k)
{
	int lenstr = 0;

	while (str[*k] != '\0')
	{
		if (str[*k] != ' ' && str[*k + 1] == ' ')
		{
			lenstr++;
			(*k)++;
			break;
		}

		if (str[*k] != ' ' && str[*k + 1] != ' ')
			lenstr++;
		(*k)++;
	}

	return (lenstr);
}


/**
 * strtow - Splits a string into words
 * @str: String to split
 *
 * Return: Pointer to an array of strings
 */
char **strtow(char *str)
{
	int i, j, k = 0, l = 0, m = 0, lenstr = 0, count = count_words(str);
	char **arr_str = NULL;

	if (str == NULL || *str == '\0' || count == 0)
		return (NULL);
	arr_str = malloc(sizeof(char *) * count + 8);
	if (!arr_str)
		return (NULL);
	for (i = 0; i < count; i++)
	{
		lenstr = count_length(str, &k);
		arr_str[i] = malloc(sizeof(char) * lenstr + 1);
		if (!arr_str[i])
		{
			for (j = 0; j < i; j++)
				free(arr_str[j]);
			free(arr_str);
			return (NULL);
		}
		while (str[l] != '\0')
		{
			if (str[l] != ' ' && str[l + 1] == ' ')
			{
				arr_str[i][m] = str[l];
				l++;
				m++;
				break;
			}
			if (str[l] != ' ' && str[l + 1] != ' ')
			{
				arr_str[i][m] = str[l];
				m++;
			}
			l++;
		}
		arr_str[i][m] = '\0';
		m = 0;
	}
	arr_str[i] = NULL;
	return (arr_str);
}
