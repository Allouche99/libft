#include <stdlib.h>
#include <string.h>

char *ft_strdup(const char *s)
{
    size_t len = 0;
    char *dup;

    while (s[len])
        len++;
    dup = (char *)malloc(len + 1);
    if (!dup)
        return NULL;
    for (size_t i = 0; i < len; i++)
        dup[i] = s[i];
    dup[len] = '\0';
    return dup;
}
