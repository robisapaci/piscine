#include <stdio.h>

char *ft_strncat(char *dest, const char *src, unsigned int nb)
{
    char *dest_start = dest;
    while (*dest)
    {
        dest++;
    }
    while (nb-- && (*dest++ = *src++))
    {
    }
    *dest = '\0';

    return (dest_start);
}

int main(void)
{
    char dest[20] = "Hello, ";
    char src[] = "World!";
    unsigned int nb = 6;

    ft_strncat(dest, src, nb);
    printf("Result: %s\n", dest);
    return (0);
}
