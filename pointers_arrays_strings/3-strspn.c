/**
 * _strspn - Gets the length of a prefix substring
 * @s: String
 * @accept: Bytes from
 *
 * Return: Number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	unsigned int count = 0;
	int last = 1;
	int len = 0;

	while (accept[len] != '\0')
		len++;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < len; j++)
		{
			if (s[i] == accept[j] && last)
			{
				count++;
				break;
			}

			if (j == len - 1)
				last = 0;
		}
	}

	return (count);
}
