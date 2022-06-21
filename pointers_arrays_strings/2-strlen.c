/**
 * _strlen - Returns the length of a string
 * @s: String
 *
 * Return: Length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (1)
	{
		if (s[i] == 0)
			break;
		i++;
	}

	return (i);
}
