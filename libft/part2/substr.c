char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i, j;

	i = start;
	j = 0;
	sub = malloc(sizeof(char)*(len + 1));
	if (!sub)
		return NULL;
	while (s[i] && j < len)
		sub[j++] = s[i++];
	sub[j] = '\0';

	return sub;
}
