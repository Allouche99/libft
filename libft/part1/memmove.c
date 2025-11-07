#include <stdio.h>
#include <string.h>
void *ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *d = dest;
	const unsigned char *s = src;

	if (d < s)
	{
		while (n--)
			*d++ = *s++;
	}
	else 
	{
		while (n--)
			d[n] = s[n];
	}
	return (dest);
}

int main(void)
{
    char str[20] = "123:X45678";

    ft_memmove(str+2, str, 6);
    printf("str = %s\n", str);  // attendu : 1212345678
    return 0;
}
