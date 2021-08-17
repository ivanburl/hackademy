#include "libft.h"

void *ft_memcpy(void *dest, const void *source, size_t count)
{
    if (dest == source)
    {
        exit(-1); //should throw exception
    }

    char *tmp_dest = (char *)dest;
    char *tmp_source = (char *)source;
    while (count--)
    {
        *tmp_dest = *tmp_source;
        tmp_dest++;
        tmp_source++;
    }
    return (void *)tmp_dest;
}