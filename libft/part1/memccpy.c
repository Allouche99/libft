void ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char *d = dest;
	unsigned char *s = src;
	unsigned char a = (unsigned char)c;
	while (n--)
	{
		*d = *s;
		if (*d == a)
			return (d + 1);
		d++;
		s++;
	}
	return (NULL);
}
