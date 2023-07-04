/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: pointer to a string to be searched.
 * @accept: pointer to a string of chars to accept
 * Return: count.
*/
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int cmpt = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				cmpt++;
				break;
			}
		}
		if (accept[j] == '\0')
			break;
	}
	return (cmpt);
}
