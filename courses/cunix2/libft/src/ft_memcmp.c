#include "libft.h"

int ft_memcmp(const void *buf1, const void *buf2, size_t count)
{
    unsigned char *tmp_buf1 = (unsigned char *)buf1;
    unsigned char *tmp_buf2 = (unsigned char *)buf2;
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