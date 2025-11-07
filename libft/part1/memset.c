#include <stdio.h>
#include <string.h>

void *ft_memset(void *ptr, int value, size_t num)
{
	unsigned char *p = ptr;
	unsigned char val = (unsigned char)value;

	for(int i = 0;i < num; i++)
		p[i] = val;
	return ptr;
}

int main() {
    int arr[5];

	memset(arr, 0, sizeof(arr)); // works: fills 20 bytes (5 ints * 4 bytes)

	ft_memset(arr, 0, sizeof(arr)); // works: fills 20 bytes (5 ints * 4 bytes)

    for (int i = 0; i < 5; i++)
        printf("%d %d\n", arr[i], arr[i]);

    return 0;
}

