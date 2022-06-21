
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

	int len1 = lenstr(dest);
	int len2 = lenstr(src);

	for (i = 0; i <= len2; i++)
		dest[len1 + i] = src[i];

	return (dest);
}
