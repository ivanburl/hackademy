#include "libft.h"

char *ft_strrchr(char *str, int ch)
{
    char *res = NULL;

    while (*str!='\0')
    {
        if ((int)*str == ch)
        {
            res = str;
        }
        str++;
    }

    return res;
}