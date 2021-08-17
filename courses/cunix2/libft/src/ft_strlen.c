#include "libft.h"

size_t  ft_strlen(char *str)
{
    int len = 0;
    while (*str++ != '\0')
    {
        len++;
    }
    return len;
}