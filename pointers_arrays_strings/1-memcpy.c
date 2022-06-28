/**
 * _memcpy - Copies memory area
 * @dest: Dest memory area
 * @src: Source memory area
 * @n: Count of bytes to copy
 *
 * Return: Pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
