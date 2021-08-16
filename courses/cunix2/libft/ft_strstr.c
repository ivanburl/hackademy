#include "libft.h"

int *ft_prefixfun(char *s)
{
    int len = strlen(s);
    int *res = malloc(sizeof(int) * len);
    res[0] = 0;
    for (int i = 1; i < len; i++)
    {
        int y = res[i - 1];
        while (y != 0 && s[i] != s[y])
        {
            y = s[y];
        }
        if (s[i] == s[y])
        {
            s[i] = y + 1;
        }
    }
    return res;
}

char *ft_strstr(char *s1, char *s2)
{
    
}