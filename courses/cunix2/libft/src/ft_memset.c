#include "libft.h"

void *ft_memset(void *buf, char ch, size_t num)
{
    char *tmp = (char *)buf;
    while (num--)
    {
        *tmp = ch;
        tmp++;
    }
    return (void *)tmp;
}