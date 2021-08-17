#include "libft.h"

void *ft_memchr(const void *arr, char ch, size_t n)
{
    char *tmp_arr = (char *)arr;
    for (size_t i = 0; i < n; i++)
    {
        if (tmp_arr[i] == ch)
        {
            return (tmp_arr+i);
        }
    }
    return NULL;
}