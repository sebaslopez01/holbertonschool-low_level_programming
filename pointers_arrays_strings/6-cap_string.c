/**
 * is_separator - Checks if is separator
 * @c: Character
 *
 * Return: 1 for Yes or 0 for No
 */
int is_separator(char c)
{
	switch (c)
	{
		case ' ':
		case '\t':
		case '\n':
		case ',':
		case ';':
		case '.':
		case '!':
		case '?':
		case '"':
		case '(':
		case ')':
		case '{':
		case '}':
			return (1);
		default:
			return (0);
	}
}

/**
 * cap_string - Capitalizes all words of a string
 * @s: String
 *
 * Return: String
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((i == 0 || is_separator(s[i - 1])) && (s[i] >= 97 && s[i] <= 122))
			s[i] = s[i] - 32;
	}

	return (s);
}
