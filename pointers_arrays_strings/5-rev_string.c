/**
 * lenstr - Get the length os string
 * @s: String
 *
 * Return: Length of the string
 */
size_t lenstr(char *s)
{
	size_t len = 0;

	while (s[len])
		len++;
	return (len);
}


/**
 * rev_string - Reverses a string
 * @s: String to reverse
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i;

	size_t len = lenstr(s);

	char new_s[len];

	for (i = 0; i < len; i++)
	{
		new_s[len - i - 1] = s[i];
	}
	new_s[len] = '\0';

	for (i = 0; i <= len; i++)
		s[i] = new_s[i];
}
