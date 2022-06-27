/**
 * _strcmp - Compares two strings
 * @s1: First String
 * @s2: Second String
 *
 * Return: Number
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] > s2[i])
			return (1);
		else if (s1[i] < s2[i])
			return (-1);
	}

	return (0);
}
