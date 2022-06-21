/**
 * _strncpy - Copies a string n times
 * @dest: First String
 * @src: Second string
 * @n: n characters to copy
 *
 * Return: Pointer to resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	int len = 0;

	while (dest[len])
		len++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	
	dest[len + n] = '\0';

	return (dest);
}
