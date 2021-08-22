#include "libft.h"
#include "stdio.h"

char *ft_strnstr(char *s1, char *s2, size_t n)
{
    size_t len1 = ft_strlen(s1), len2 = ft_strlen(s2);
    len1 = len1 > n ? n : len1;

    if (*s2 == '\0')
    {
        return s1;
    }

    for (size_t i = 0; i + len2 <= len1; i++)
    {
        int ok = 1;
        for (size_t j = 0; j < len2; j++)
        {
            if (s1[i + j] != s2[j])
            {
                ok = 0;
                break;
            }
        }
        if (ok)
        {
            return (char *)(s1 + (int)i);
        }
    }
    return NULL;
}