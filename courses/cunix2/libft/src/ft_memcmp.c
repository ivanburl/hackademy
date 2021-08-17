#include "libft.h"

int ft_memcmp(const void *buf1, const void *buf2, size_t count)
{
    char *tmp_buf1 = (char *)buf1;
    char *tmp_buf2 = (char *)buf2;
    for (size_t i = 0; i < count; i++)
    {
        if (tmp_buf1[i] == tmp_buf2[i])
        {
            continue;
        }
        return ((int)tmp_buf1[i] - (int)tmp_buf2[i]);
    }
    return 0;
}