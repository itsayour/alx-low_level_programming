int _strcmp(char *s1, char *s2)
{
	int i = 0;
       	int cmp;

	while (s1[i] == s2[i])
	{
		i++;
		if (s1[i] == '\0')
			return (0);
	}

	cmp = s1[i] - s2[i];

	return (cmp);
}
