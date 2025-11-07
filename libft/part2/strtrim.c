int	in_set(char c, char *set)
{
	while (*set)
	{
		if(*set == c)
			return (1);
		set++;
	}
	return (0);
}
char *ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	start, end, i;

	if (!s1 || !set)
		return NULL;
	start = 0;
	while (s1[start] && in_set(s1[start], set))
		start++;
	if (!s1[start])
	{
		str = malloc(sizeof(char));
		str[0] = '\0';
		return str;
	}
	end = start;
	while (s1[end])
		end++;
	end--;
	while (in_set(s1[end],set))
		end--;
	str = malloc(sizeof(char)* (end - start + 2));
	if (!str)
		return NULL;
	i = 0;
	while (s1[start] && start <= end)
	{
		str[i] = s1[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}
