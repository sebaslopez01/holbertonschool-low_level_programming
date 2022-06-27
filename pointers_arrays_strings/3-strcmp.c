/**
 * _strcmp - Compares two strings
 * @s1: First String
 * @s2: Second String
 *
 * Return: Number
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		s1++;
		s2++;
	}

	if (*s1 == *s2)
		return (0);
	else
		return (*s1 - *s2);
}
