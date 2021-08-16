#include "libft.h"

char *ft_strdup(const char *str)
{
    int len = 0;
    while (str[len])
    {
        len++;
    }

    char *res = malloc(len + 1);
    for (int i = 0; i < len; i++)
    {
        res[i] = str[i];
    }
    res[len] = '\0';

    return res;
}