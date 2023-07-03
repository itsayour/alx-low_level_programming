/**
 * _memcpy - function that copies memory area.
 * @dest: destination memory area.
 * @src: source memory ares.
 * @n: number of bytes t be copied.
 * Return: dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (int i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
