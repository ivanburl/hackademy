#include "libft.h"

char *ft_strstr(char *s1, char *s2)
{
    int len1 = ft_strlen(s1), len2 = ft_strlen(s2);
    for (int i = 0; i <= len1 - len2; i++)
    {
        int ok = 1;
        for (int j = 0; j < len2; j++)
        {
            if (s1[i+j]!=s2[j])
            {
                ok=0;
                break;
            } 
        }
        if (ok)
        {
            return (s1+i);
        }
    }
    return NULL;
}