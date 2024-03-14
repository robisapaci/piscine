#include <stdio.h>

char *ft_strcat(char *dest, char *src)
{
    char *original_dest = dest;
    while (*dest)
    {
        dest++;
    }
    while (*src)
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
    return original_dest;
}

int main(void)
{
    char dest[20] = "Hello, ";
    char src[] = "World!";

    ft_strcat(dest, src);
    printf("%s\n", dest);
    return (0);
}
