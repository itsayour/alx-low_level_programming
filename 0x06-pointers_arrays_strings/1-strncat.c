/**
 * _strncat - concatenate two strings
 *
 * @dest: destination string
 * @src: source srting
 * @n: integer that specify the max num of chars copy from src to dest
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < n; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
