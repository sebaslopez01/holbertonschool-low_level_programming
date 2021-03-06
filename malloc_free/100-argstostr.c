#include <stdlib.h>

/**
 * count_memory - Counts the memory space needed for an array of strings
 * @ac: Size of av
 * @av: Array of strings
 *
 * Return: Memory space needed
 */
int count_memory(int ac, char **av)
{
	int i, j, count = 0;

	if (ac == 0 || av == NULL)
		return (0);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			count++;
	}

	return (count);
}


/**
 * argstostr - Concatenates all the arguments passed
 * @ac: Size of av
 * @av: Array of arguments
 *
 * Return: A pointer to a new string or NULL if fails
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0;

	char *new_str = NULL;

	if (ac == 0 || av == NULL)
		return (NULL);

	new_str = malloc(sizeof(char) * count_memory(ac, av) + ac + 1);

	if (!new_str)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
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
