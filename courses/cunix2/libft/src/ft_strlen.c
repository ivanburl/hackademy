#include "libft.h"

int  ft_strlen(char *str)
{
    int len = 0;
    while (*str++ != '\0')
    {
        len++;
    }
    return len;
}