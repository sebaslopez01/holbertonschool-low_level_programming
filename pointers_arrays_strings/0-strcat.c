
/**
 * lenstr - Get length of string
 * @s: String
 *
 * Return: length of string
 */
int lenstr(char *s)
{
	int len = 0;

	while (s[len])
		len++;
	return (len);
}

/**
 * _strcat - Concatenates two strings
 * @dest: Dest string
 * @src: Source String
 *
 * Return: A pointer to resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	char new_s[400];

	int len1 = lenstr(dest);
	int len2 = lenstr(src);

	for (i = 0; i < len1; i++)
		new_s[i] = dest[i];

	for (i = 0; i < len2; i++)
		new_s[i + len1 - 1] = src[i];

	new_s[len1 + len2] = '\0';

	return (new_s);
}
