#include "libft.h"

char *ft_strchr(char *str, int ch)
{
    char *tmp = str;
    while (*str!='\0')
    {
        if ((int)*str == ch)
        {
            return str;
        }
        str++;
    }
    return NULL;
}