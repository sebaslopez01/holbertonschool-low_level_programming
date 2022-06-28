/**
 * leet - Encodes a string into 1337
 * @s: String
 *
 * Return: String
 */
char *leet(char *s)
{
	int i, j;

	char a[5] = {'a', 'e', 'o', 't', 'l'};
	char n[5] = {'4', '3', '0', '7', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == a[j] || s[i] == a[j] - 32)
				s[i] = n[j];
		}
	}

	return (s);
}
