#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
    while (*s1 && (*s1 == *s2))
    {
        s1++;
        s2++;
    }
    return *(unsigned char *)s1 - *(unsigned char *)s2;
}

int main(void)
{
    char *str1 = "hello";
    char *str2 = "hello";
    char *str3 = "world";

    printf("Comparison of \"%s\" and \"%s\": %d\n", str1, str2, ft_strcmp(str1, str2));
    printf("Comparison of \"%s\" and \"%s\": %d\n", str1, str3, ft_strcmp(str1, str3));

    return (0);
}
