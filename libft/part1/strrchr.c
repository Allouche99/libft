#include <stdio.h>
char *ft_strrchr(const char *s, int c)
{
	unsigned char a = (unsigned char) c;
	char	*p;

	p = NULL;
	while (*s)
	{
		if (*s == a)
			p = (char *)s;
		s++;
	}
	if (p != NULL)
		return p;

	if (a == '\0')
		return ((char *)s);
	return NULL;
}

int main(void)
{
    char str[] = "Hello world";
    char *p;

    // Cherche 'o'
    p = ft_strrchr(str, 'o');
    if (p)
        printf("Derniere occurrence de 'o' : %s\n", p);
    else
        printf("'o' non trouve\n");

    // Cherche 'z' (inexistant)
    p = ft_strrchr(str, 'z');
    if (p)
        printf("Derniere occurrence de 'z' : %s\n", p);
    else
        printf("'z' non trouve\n");

    // Cherche '\0'
    p = ft_strrchr(str, '\0');
    if (p)
        printf("Pointeur sur '\\0' : %p\n", (void *)p);

    return 0;
}

