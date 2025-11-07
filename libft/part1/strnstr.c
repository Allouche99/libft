#include <stddef.h>
char *strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	l;


	i = 0;
	if (needle[i] == '\0')
		return (char *)(haystack);
	l = len;
	while (l-- && haystack[i])
	{
			j = 0;
			while (needle[j] && haystack[i + j] && (i + j) < len && \
				needle[j] == haystack[i + j])
				j++;
			if (!needle[j])
				return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
