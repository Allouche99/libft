char *ft_strchr(const char *s, int c)
{
	unsigned char a = (unsigned char) c;
	while (*s)
	{
		if (*s == a)
			return ((char *)s);
		s++;
	}
	if (a == '\0')
		return ((char *)s);
	return NULL;
}
