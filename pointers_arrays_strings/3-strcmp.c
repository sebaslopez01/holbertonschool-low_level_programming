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

	int result = 0;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] > s2[i])
			result++;
		else if (s1[i] < s2[i])
			result--;
	}

	return (result);
}
