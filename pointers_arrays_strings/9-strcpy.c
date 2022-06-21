/**
 * _strcpy - Copies a string
 * @dest: Buffer to copy
 * @src: Source to cpy the string
 *
 * Return: The pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	int len = 0;

	while (src[len])
		len++;

	for (i = 0; i < len; i++)
		dest[i] = src[i];
	dest[len] = '\0';

	return (src);
}
