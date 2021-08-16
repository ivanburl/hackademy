#include"libft.h"

void ft_bzero(void* s, size_t n)
{
    char *tmp = (char *) s;
    while(n-- && tmp)
    {
        *tmp = '\0';
        tmp++;
    }
}