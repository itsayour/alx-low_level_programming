char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (int i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
