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
		if (str[i] != ' ' && str[i + 1] == ' ')
			count++;
		i++;
	}

	return (count);
}


/**
 * strtow - Splits a string into words
 * @str: String to split
 *
 * Return: Pointer to an array of strings
 */
char **strtow(char *str)
{
	int i, j, k = 0, l = 0, m = 0, lenstr = 0;
	char **arr_str = NULL;

	if (str == NULL || *str == '\0')
		return (NULL);
	
	arr_str = malloc(sizeof(char *) * count_words(str) + 1);

	if (!arr_str)
		return (NULL);

	for (i = 0; i < count_words(str); i++)
	{
		while (str[k] != '\0')
		{
			if (str[k] != ' ' && str[k + 1] == ' ')
			{
				lenstr++;
				k++;
				break;
			}
			if (str[k] != ' ' && str[k + 1] != ' ')
				lenstr++;
			k++;
		}

		arr_str[i] = malloc(sizeof(char) * lenstr + 1);
		lenstr = 0;

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
