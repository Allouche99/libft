size_t strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t len_d;
	size_t len_s;

	len_d = ftstrlen(dst);
	len_s = ftstrlen(src);
	i = 0;

	if(dstsize <= len_d)
		return dstsize + len_s;
	while (src[i] && (dstsize - len_d - 1 - i))
	{
		dst[len_d + i] = src[i];
		i++;
	}
	dst[i + len_d] = '\0';
	return (len_d + len_s);
}
