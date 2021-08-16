#include "libft.h"

char *ft_strrchr(char *str, char ch)
{
    char *res = NULL;

    while (*str != '\0')
    {
        if ((int)*str == ch)
        {
            res = str;
        }
        str++;
    }
    if ((int)*str == ch)
        res = str;

    return res;
}