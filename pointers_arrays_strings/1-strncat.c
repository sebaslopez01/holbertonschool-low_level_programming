/**
 * lenstr - String length
 * @s: String
 *
 * Return: String length
 */
int lenstr(char *s)
{
	int len = 0;

	while (s[len])
		len++;
	return (len);
}

/**
 * _strncat - Concatenates two strings
 * @dest: Dest string
 * @src: Source String
 * @n: Use at most n bytes
 *
 * Return: Pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;

	int len1 = lenstr(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[len1 + i] = src[i];

	dest[len1 + n] = '\0';

	return (dest);
}
