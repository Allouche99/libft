size_t strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	len_s;
	size_t	len_d;

	len_s = 0;
	while (src[len_s])
		len_s++;
	len_d = 0;
	if (dstsize > 0)
	{
		while (len_d < dstsize - 1&& *src)
		{
			len_d++;
			*dst = *src;
			dst++;
			src++;
		}
		*dst= '\0';
	}
	return (len_s);
}

