void ft_bzero(void *s, size_t n)
{
	unsigned char *ptr = s;

	for (size_t i = 0; i < n; i++)
		ptr[i] = '\0';
}
