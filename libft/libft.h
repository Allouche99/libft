#ifndef LIBFT_H
# define LIBFT_H
# include <stddef.h> // pour size_t

// Mémoire
void    *ft_memset(void *b, int c, size_t len);
void    ft_bzero(void *s, size_t n);
void    *ft_memcpy(void *dst, const void *src, size_t n);
void    *ft_memmove(void *dst, const void *src, size_t len);
int     ft_memcmp(const void *s1, const void *s2, size_t n);

// Chaînes
size_t  ft_strlen(const char *s);
size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t  ft_strlcat(char *dst, const char *src, size_t dstsize);

#endif 
