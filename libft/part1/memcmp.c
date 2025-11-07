#include <stdio.h>
#include <string.h>
#include <time.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const unsigned char *str1 = s1;
    const unsigned char *str2 = s2;

// juste une idée, pas compliqué :
while (n >= sizeof(unsigned long))
{
    if (*(unsigned long*)str1 != *(unsigned long*)str2)
        break; // ici tu repars à comparer octet par octet
    str1 += sizeof(unsigned long);
    str2 += sizeof(unsigned long);
    n -= sizeof(unsigned long);
}
    return 0;
}

void bench_case(unsigned char *a, unsigned char *b, size_t size, const char *desc)
{
    clock_t start, end;

    start = clock();
    int r1 = ft_memcmp(a, b, size);
    end = clock();
    double t1 = (double)(end - start) / CLOCKS_PER_SEC;

    start = clock();
    int r2 = memcmp(a, b, size);
    end = clock();
    double t2 = (double)(end - start) / CLOCKS_PER_SEC;

    printf("%s:\n", desc);
    printf("  ft_memcmp result=%d, time=%f sec\n", r1, t1);
    printf("  memcmp    result=%d, time=%f sec\n", r2, t2);
}

int main()
{
    size_t size = 1000000;
    unsigned char a[size], b[size];

    for (size_t i = 0; i < size; i++)
        a[i] = b[i] = i % 256;

    // Cas 1 : différence au début
    b[0] = 255;
    bench_case(a, b, size, "Différence au début");

    // Cas 2 : différence au milieu
    b[0] = a[0]; // remettre la première identique
    b[size/2] = 255;
    bench_case(a, b, size, "Différence au milieu");

    // Cas 3 : différence à la fin
    b[size/2] = a[size/2];
    b[size-1] = 255;
    bench_case(a, b, size, "Différence à la fin");

    return 0;
}

