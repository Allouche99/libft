#include <stdio.h>
#include <stdlib.h>

char **ft_split(char const *s, char c);

void print_split(char **res)
{
    int i = 0;
    while (res[i])
    {
        printf("res[%d] = \"%s\"\n", i, res[i]);
        i++;
    }
    if (i == 0)
        printf("(vide)\n");
    printf("----\n");
}

int main(void)
{
    char **res;

    printf("Test 1: phrase normale\n");
    res = ft_split("hello world 42", ' ');
    print_split(res);

    printf("Test 2: chaine vide\n");
    res = ft_split("", ' ');
    print_split(res);

    printf("Test 3: que des separateurs\n");
    res = ft_split("     ", ' ');
    print_split(res);

    printf("Test 4: separateurs au debut et a la fin\n");
    res = ft_split("   foo bar   baz   ", ' ');
    print_split(res);

    printf("Test 5: un seul mot\n");
    res = ft_split("word", ' ');
    print_split(res);

    return 0;
}

char *ft_substr(char const *s, unsigned int start, size_t len)
{
        char    *sub;
        size_t  i, j;

        i = start;
        j = 0;
        sub = malloc(sizeof(char)*(len + 1));
        if (!sub)
                return NULL;
        while (s[i] && j < len)
                sub[j++] = s[i++];
        sub[j] = '\0';

        return sub;
}

int ft_count_word(char const *s,char c)
{
	int i=0;
	int count = 0;
	int start;
	int end;
	while (s[i] == c)
		i++;
	while (s[i])
	{
		start = i;
		while (s[i] && s[i] != c)
			i++;
		end = i;
		if (start < end)
			count++;
		if (s[i])
			i++;
	}
		return count;
}
char **ft_split(char const *s, char c)
{
	char **res;
	int	i, j, start, end;
	res = malloc(sizeof(char *)* (ft_count_word(s,c) + 1));	
	if(!res)
		return NULL;
	i = 0;
	j = 0;
	while (s[i] == c)
		i++;
	while (s[i])
	{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			end = i;
			if (start < end)
			{
				res[j] = ft_substr(s,start,(end-start));
				j++;
			}
		if (s[i])
			i++;
	}
	res[j] = NULL;
	return (res);
}
