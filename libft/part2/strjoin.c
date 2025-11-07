char *ft_strjoin(char const *s1, char const *s2)
{
	char	*strjoin;
	size_t	i,j;

	i = 0;
	j = 0;

	while (s1[i])
		i++;
	while (s2[j])
		j++;

	strjoin = malloc(sizeof(char)* (i + j + 1));
	if(!strjoin)
		return NULL;
	i = 0;
	while (s1[i])
		strjoin[i] = s1[i++];
	j = 0;
	while (s2[j])
		strjoin[i + j] = s2[j++];
	strjoin[i + j] = '\0';
	return strjoin;
}
