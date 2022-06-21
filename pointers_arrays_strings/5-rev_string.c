/**
 * rev_string - Reverses a string
 * @s: String to reverse
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i;

	int len = 0;

	while (1)
	{
		if (s[len] == 0)
			break;
		len++;
	}

	char new_s[len];

	for (i = len - 1; i >= 0; i--)
	{
		new_s[i] = s[i];
	}

	s = new_s;
}
