#include <stdlib.h>
#include <string.h>

/**
 * argstostr - Concatenates all the arguments passed
 * @ac: Size of av
 * @av: Array of arguments
 *
 * Return: A pointer to a new string or NULL if fails
 */
char *argstostr(int ac, char **av)
{
	int i, k = 0;
	unsigned int j;

	char *new_str = NULL;

	if (ac == 0 || av == NULL)
		return (NULL);

	new_str = malloc(sizeof(char) * strlen(av) + ac);

	if (!new_str)
		return (NULL);

	for (i = 1; i < ac; i++)
	{
		for (j = 0; j < strlen(av[i]); j++)
		{
			new_str[k] = av[i][j];
			k++;
		}
		new_str[k] = '\n';
		k++;
	}

	new_str[k] = '\0';

	return (new_str);
}
