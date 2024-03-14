#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int i;

    i = 0;
    while (i < n && s1[i] != '\0' && s2[i] != '\0')
    {
        if (s1[i] != s2[i])
        {
            return (unsigned char)s1[i] - (unsigned char)s2[i];
        }
        i++;
    }
    return (unsigned char)s1[i] - (unsigned char)s2[i];
}

int main(void)
{
    char s1[] = "Hello";
    char s2[] = "Hello, World!";
    unsigned int n = 5;

    int result = ft_strncmp(s1, s2, n);
    printf("Result: %d\n", result);
    return (0);
}
