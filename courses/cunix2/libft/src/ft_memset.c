#include "libft.h"

void *ft_memset(void *buf, char ch, size_t num)
{
    char *tmp = (char *)buf;
    for (size_t i = 0; i<num;i++)
    {
        tmp[i]=ch;
    }
    return (void *)tmp;
}