#include "libft.h"

char *ft_strchr(char *str, char ch)
{
    while (*str != '\0')
    {
        if ((int)*str == ch)
        {
            return str;
        }
        str++;
    }

    if ((int)*str == ch)
    {
        return str;
    }

    return NULL;
}