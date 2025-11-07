int strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char *str1 = (unsigned char *) s1;
	unsigned char *str2 = (unsigned char *) s2;
	if (n == 0)
		return (0);
	while (n && *str1 && *str2 && *str1 == *str2)
	{
		str1++;
		str2++;
		n--;CRIPTION
	}
	return (int)(*str1 - *str2);
}
