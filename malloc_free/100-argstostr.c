#include <stdlib.h>
#include <string.h>

/**
 * count_memory - Counts the memory space needed for an array of strings
 * @ac: Size of av
 * @av: Array of strings
 *
 * Return: Memory space needed
 */
int count_memory(int ac, char **av)
{
	int i, count = 0;
	unsigned int j;

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
	int i, k = 0;
	unsigned int j;

	char *new_str = NULL;

	if (ac == 0 || av == NULL)
		return (NULL);

	new_str = malloc(sizeof(char) * count_memory(ac, av) + ac);

	if (!new_str)
		return (NULL);

	for (i = 0; i < ac; i++)
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
