#include "libft.h"

char *ft_strstr(char *s1, char *s2)
{
    size_t len1 = ft_strlen(s1), len2 = ft_strlen(s2);
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
            return (s1 + i);
        }
    }
    return NULL;
}